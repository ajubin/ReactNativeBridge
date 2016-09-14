'use strict';

import React, { Component } from 'react';
import { View, Text, StyleSheet, TouchableHighlight, NativeModules } from 'react-native';

export default class MyScene extends Component {
    static get defaultProps() {
        return {
            title: 'MyScene'
        };
    }

    _navigate(name) {
    this.props.navigator.push({
      name: 'Home',
      passProps: {
        name: name
      }
    })
  }
    render() {
        NativeModules.TCWrapper.addParameter("#EVENT#", "screen");
        NativeModules.TCWrapper.addParameter("#PAGE_NAME#", "MyScene");
        NativeModules.TCWrapper.execute();

        return (
            <View style={ styles.container }>
                <Text style={ styles.heading }>Hello from Main</Text>
                <TouchableHighlight style={ styles.button } onPress={ () => this._navigate('YOYOYOYOYO') }>
                    <Text style={ styles.buttonText }>GO GO GO</Text>
                </TouchableHighlight>
            </View>
        )
    }
}
var styles = StyleSheet.create({
    container: {
        flex: 1,
        marginTop: 80
    },
    heading: {
        fontSize:22,
        marginBottom:10
    },
    button: {
        height:60,
        //justifyContent: 'center',
        backgroundColor: '#efefef',
        alignItems: 'center'
        //justifyContent: 'center'
    },
    buttonText: {
        fontSize:20
    }
});