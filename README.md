# `reason-native-base`
[![Version](https://img.shields.io/npm/v/reason-native-base.svg)](https://www.npmjs.com/package/reason-native-base)

[ReasonML](https://reasonml.github.io) / [BuckleScript](https://bucklescript.github.io) bindings for [NativeBase](https://github.com/GeekyAnts/NativeBase).


## Description
This bindings package let you use the NativeBase UI library for ReactNative with ReasonML.
It is largely inspired by [reason-react-native](https://github.com/reason-react-native/reason-react-native)
The package version is of form `<native-base-version>-<package-release>`.

## Getting started
Add [reason-react-native](https://github.com/reason-react-native/reason-react-native) to you project.

Add `reason-native-base` and `native-base` npm dependencies :
```bash
npm install reason-native-base native-base
# or
yarn add install reason-native-base native-base
```

Add `reason-native-base` to `bs-dependencies` in `bsconfig.json`

NativeBase components will be available from the NativeBase module.

## Example

``` Reason
// App.re

open NativeBase;
open ReactNative.Style;

module AppContent {
  [@react.component]
  let make = () => {
    <Container style={viewStyle(~paddingTop=dp(float_of_int(Expo.Constants.statusBarHeight)),())}>
      <Header>
        <Left>
          <Button transparent=true>
            <Icon name="menu" />
          </Button>
        </Left>
        <Body>
          <Title>{React.string("reason-native-base")}</Title>
        </Body>
        <Right />
      </Header>
      <Content>
        <Text>{React.string("This application is using ReasonML and NativeBase !")}</Text>
      </Content>
    </Container>
  };
}

[@react.component]
let make = () => {
  let (loading, setLoading) = React.useState(() => true)
  
    React.useEffect0(() => {
      Expo.Font.loadAsync([
      ("Ionicons", ReactNative.Packager.require("../node_modules/native-base/Fonts/Ionicons.ttf")),
      ("Roboto", ReactNative.Packager.require("../node_modules/native-base/Fonts/Roboto.ttf")),
      ("Roboto_medium", ReactNative.Packager.require("../node_modules/native-base/Fonts/Roboto_medium.ttf")),
    ]) |> Js.Promise.then_(_ => {
      Js.log("Font loaded")
      setLoading(_ => false);
      Js.Promise.resolve()
    }) |> ignore;
    None;
  });

  if (loading) {
    Js.log("Loading");
    <View />
  } else {
    Js.log("Loaded");
    <AppContent />
  }
}
```
<img width="300" src="https://lh3.googleusercontent.com/UnajN3J_45Mt1-ihH9gjw0mUvra7saFlrpkw6fEVqjc1Kom9olBr1MGH27XQIDDoNwy-0efY6DWw6LPCP9NJcldkAiNFnIWTnjG92h8Cg5IEi4W2nzrFCZ7zFffK0Vq5eumUpCQP4HIiUgCaQePzx2ijSXqn7HVKkxzLzQUhk4IcK6lv-T6VjjC5bjkdEuJN5-FhyHRFvkfR6yP5B-Ds56BxJDuGSHa2qEMdgnNT1zPAzO1X8kuILre97i4jp9nBVWvzojcKR0c1_c-3NPeB-qJoTEdmihW8afy_gmrnGuThzKJP49_eypKWwfmLvH0IG3vzJ5M325y3wv4GgLuLOeaxDJ2rfMoyrVJWEQSeBROHZmpsv2IS0FiP6cJALX2BRak_d6egKJqTDbUOdy2ySzqf4Owxgp8QGuSP68onjj1tKSk3z1QZbofeT6gDyIyp1qgjMdFmHnHg6kGtTL_9pzFCeVhvUrYiO0K7o84nmGABSynxM1CpxxCU6Hu9pMb6U_CjC5jOOFkMfcJvBweWUydsry9OwaVr1iGNXazFu0xlz9JOvbU1VyhIIclCi77N9RxGsqGgHdgV5utYvozzWcRihvawlIcq7w72dZDKBxuPPEVqbpP-seegg3-9u1lumoj1dnGpJMA1LA86jE2dQSDmOOzdvM9NPJh4ySa8MhGh4g-TvOTc6qr91kGGGxXgszt2i6aQF8S8d9eEyvsbh2_wIVpLUMhFx_4QxRZIBP_68mm_=w720-h1560-no" />

