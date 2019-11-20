open ReactNative;
include NativeElement;

[@react.component] [@bs.module "native-base"]
external make:
  (
    ~ref: ref=?,
    ~searchBar: bool=?,
    ~rounded: bool=?,
    ~hasTabs: bool=?,
    ~noShadow: bool=?,
    ~hasSubtitle: bool=?,
    ~span: bool=?,
    ~androidStatusBarColor: string=?,
    ~iosBarStyle: [@bs.string] [
                 | `default
                 | [@bs.as "light-content"] `light_content
                 | [@bs.as "dark-content"] `dark_content
               ]=?,
    ~hasSegment: bool=?,
    ~translucent: bool=?,
    ~transparent: bool=?,
    ~noLeft: bool=?,
    ~style: Style.t=?,
    ~testID: string=?,
    // Children
    ~children: React.element=?
  ) => React.element = "Header";