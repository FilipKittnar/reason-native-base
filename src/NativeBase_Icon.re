open ReactNative;
include NativeElement;

[@react.component] [@bs.module "native-base"]
external make:
  (
    ~ref: ref=?,
    ~name: string=?,
    ~onPress: Event.pressEvent => unit=?,
    ~active: bool=?,
    ~ios: string=?,
    ~android: string=?,
    ~color: string=?,
    ~fontSize: int=?,
    ~_type: [@bs.string] [
              | [@bs.as "AntDesign"] `ant_design
              | [@bs.as "Entypo"] `entype
              | [@bs.as "EvilIcons"] `evil_icons
              | [@bs.as "Feather"] `feather
              | [@bs.as "FontAwesome"] `font_awesome
              | [@bs.as "FontAwesome5"] `font_awesome5
              | [@bs.as "Foundation"] `foundation
              | [@bs.as "Ionicons"] `ionicons
              | [@bs.as "MaterialCommunityIcons"] `material_community_icons
              | [@bs.as "MaterialIcons"] `materiel_icons
              | [@bs.as "Octicons"] `octinons
              | [@bs.as "SimpleLineIcons"] `simple_line_icons
              | [@bs.as "Zocial"] `zocial
            ]=?,
    ~style: Style.t=?,
    ~testID: string=?,
  ) => React.element = "Icon";