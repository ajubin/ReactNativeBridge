'use strict';

import { NativeModules } from 'react-native';
import createReactClass from 'create-react-class';


module.exports = NativeModules.TCWrapper;

var ReactNat = require('react-native');
var {
      AppRegistry,
    } = ReactNat;

import { Navigator } from 'react-native-deprecated-custom-components';
import React, { Component } from 'react';
import MyScene from './MyScene';
import MySecondScene from "./MySecondScene";

var TCWithReact = createReactClass({

  renderScene(route, navigator) {
    if(route.name == 'Main') {
      return <MyScene navigator={navigator} {...route.passProps}  />
    }
    if(route.name == 'Home') {
      return <MySecondScene navigator={navigator} {...route.passProps}  />
    }
  },

  render() {
    NativeModules.TCWrapper.initTagCommander(1263, 39);
    return (
        <Navigator
            style={{ flex:1 }}
            initialRoute={{ name: 'Main' }}
            renderScene={ this.renderScene } />
    )
  }
});

AppRegistry.registerComponent('TCWithReact', () => TCWithReact);
