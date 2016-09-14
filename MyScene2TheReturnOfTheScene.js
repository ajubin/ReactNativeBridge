import React, { Component } from 'react';
import { View, Text, StyleSheet, TouchableHighlight , NativeModules } from 'react-native';

export default class MyScene2TheReturnOfTheScene extends Component {
    static get defaultProps() {
        return {
            title: 'MyScene2TheReturnOfTheScene'
        };
    }

    render() {
        NativeModules.TCWrapper.addParameter("#EVENT#", "screen");
        NativeModules.TCWrapper.addParameter("#PAGE_NAME#", "MyScene2TheReturnOfTheScene");
        NativeModules.TCWrapper.execute();

        return (
            <View style={ styles.container }>
                <Text>Hi! My name is {this.props.title}.</Text>
                  <TouchableHighlight style={ styles.button } onPress={ () => this.props.navigator.pop() }>
                    <Text style={ styles.buttonText }>GO Back</Text>
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

// <TouchableHighlight style={ styles.button } onPress={ () => this.props.navigator.pop() }>