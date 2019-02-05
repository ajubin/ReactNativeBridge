package com.tcwithreact;
import android.util.Log;

import com.facebook.react.bridge.ReactApplicationContext;
import com.facebook.react.bridge.ReactContextBaseJavaModule;
import com.facebook.react.bridge.ReactMethod;
import com.tagcommander.lib.TagCommander;
import com.tagcommander.lib.core.TCDebug;
import java.util.EnumSet;

public class TCWrapper extends ReactContextBaseJavaModule
{
    TagCommander TC = null;

    public TCWrapper(ReactApplicationContext reactContext)
    {
        super(reactContext);
    }

    @Override
    public String getName()
    {
        return "TCWrapper";
    }

    @ReactMethod
    /**
     * Init the Tag Commander instance for the whole application.
     *
     * @param siteID the ID of the client's configuration site.
     * @param containerID the ID of the container to be used for this application.
     */
    public void initTagCommander(int siteID, int containerID)
    {
        /*
         * VERBOSE is recommended during test as it prints information
         * that helps figuring out what is working and what is not
         */
        TCDebug.setDebugLevel(Log.VERBOSE);
        TCDebug.setNotificationLog(true);

        /*
         * We know to which server-side container send the information
         * thanks to site id and container id.
         */
        TC = new TagCommander(siteID, containerID, this.getReactApplicationContext());
    }

    @ReactMethod
    /**
     * This method check if the instance of TagCommander is initialized, if so it will store data
     * until the next sendData is called.
     */
    public void addData(String name, String value)
    {
        if (TC == null)
        {
            Log.e("TCWrapper", "Error, the TagCommander instance was not instantiated.\nPlease call initTagCommander(int siteID, int containerID)");
            return;
        }

        TC.addData(name, value);
    }

    @ReactMethod
    /**
     * This will call sendData on TagCommander's instance after checking if it's been initialized.
     */
    public void sendData()
    {
        if (TC == null)
        {
            Log.e("TCWrapper", "Error, the TagCommander instance was not instantiated.\nPlease call initTagCommander(int siteID, int containerID)");
            return;
        }

        TC.sendData();
    }

    @ReactMethod
    /**
     * This will call disableSDK on TagCommander's instance after checking if it's been initialized.
     */
    public void disableSDK()
    {
        if (TC == null)
        {
            Log.e("TCWrapper", "Error, the TagCommander instance was not instantiated.\nPlease call initTagCommander(int siteID, int containerID)");
            return;
        }

        TC.disableSDK();
    }

    @ReactMethod
    /**
     * This will call enableSDK on TagCommander's instance after checking if it's been initialized.
     */
    public void enableSDK()
    {
        if (TC == null)
        {
            Log.e("TCWrapper", "Error, the TagCommander instance was not instantiated.\nPlease call initTagCommander(int siteID, int containerID)");
            return;
        }

        TC.enableSDK();
    }
}
