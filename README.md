A bridge to React Native
========================

TagCommander's SDK being build for native platforms, it is not available to use in React Native. But like all the non-native technologies, React has a way to make a connection between native libraries and the language it is using. This is called a Bridge and this document is there to explain how it is done and used.


I followed the steps as described in this links: 

* http://facebook.github.io/react-native/docs/native-modules-android.html
* https://shift.infinite.red/native-modules-for-react-native-android-ac05dbda800d
* http://facebook.github.io/react-native/docs/native-modules-ios.html
* http://facebook.github.io/react-native/docs/linking-libraries-ios.html

The samples will be separated for Android and iOS.

Android
=======

Steps
-----

* Copy TagCommander's Jar inside your android project.
* Create a ReactPackage, a wrapper object grouping many modules (both native and JavaScript) together, and include it in the getPackages method of MainActivity.
* Create a Java class extending ReactContextBaseJavaModule that implements the desired functionality and register it with our ReactPackage.
* Override the getName method in the aforementioned class. This will be the name of the native module in JavaScript.
* Expose desired public methods to JavaScript by annotating them with @ReactMethod.
* Finally, import the module from NativeModules in your JavaScript code and call the methods.

Copy the Jar
------------

You first need to create a libs folder : android/app/libs
Then take the Jar from TagCommander and copy it inside.

It is possible that gradle doesn't compile automitically with the jar for some reasons. If there is any issue, open build.gradle and add the following line inside the dependencies.

	compile files('libs/TagCommander.jar')

ReactPackage
------------

You might already use one, but since the project I made only use TagCommander I created one for only this purpose. You can find the file TCReactPackage.java associated with this documentation.

In my case it's only use it to be linking our module to the NativeModules.

ReactContextBaseJavaModule
--------------------------

Here is the main part about the bridging process. We have a class that call directly the native SDK and you can make "React visible" the methods you implement there.

We implemented the three most important methods of the SDK here. The initialize method, and method to add data and the one to send all those data. It should covers around 90% of client's usages. If you need more, it is pretty easy to add more. Don't hesitate to contact us if you need anything.

I called this class TCWrapper.java, you can check it for a more detailed view of the bridge.

MainApplication
---------------

In Android you need a final step which is instanciating the class you use for the bridge in getPackages().

In our sample, here is what we have done :

    @Override
    protected List<ReactPackage> getPackages()
    {
      return Arrays.<ReactPackage>asList(
          new MainReactPackage(),
          // We add our package to the list
          new TCReactPackage()
      );
    }

iOS
===

Steps
-----

* Add the library to your project
* Add TCWrapper to your project
* Done


Add Library and Wrapper
-----------------------

Open XCode and simply copy the file inside "Release-universal" into the "Libraries" folder, you can use the option "Copy if needed". XCode will do everything else.

After the copy past the TCWrapper.h and TCWrapper.m in your project sources and it's done.


Calling the bridges
===================

From this point all that is left is calling the code.

First add the required imports :

	import { NativeModules } from 'react-native';
	module.exports = NativeModules.TCWrapper;

Then simply call the methods you want to use :

	NativeModules.TCWrapper.initTagCommander(1263, 39);

