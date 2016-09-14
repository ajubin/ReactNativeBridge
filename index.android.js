'use strict';

import { NativeModules } from 'react-native';
module.exports = NativeModules.TCWrapper;

var ReactNat = require('react-native');
var {
      AppRegistry,
      Navigator,
    } = ReactNat;

import React, { Component } from 'react';
import MyScene from './MyScene';
import MyScene2TheReturnOfTheScene from "./MyScene2TheReturnOfTheScene";

var TCWithReact = React.createClass({

  renderScene(route, navigator) {
    if(route.name == 'Main') {
      return <MyScene navigator={navigator} {...route.passProps}  />
    }
    if(route.name == 'Home') {
      return <MyScene2TheReturnOfTheScene navigator={navigator} {...route.passProps}  />
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
