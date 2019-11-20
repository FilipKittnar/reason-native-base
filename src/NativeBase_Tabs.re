open ReactNative;
include NativeElement;

[@react.component] [@bs.module "native-base"]
external make:
  (
    ~ref: ref=?,
    ~renderTabBar: unit => React.element=?,
		~tabBarPosition: [@bs.string] [ `top | `bottom ]=?,
		~edgeHitWidth: int=?,
		~springTension: int=?,
		~springFriction: int=?,
		~onChangeTab: unit => unit=?,
		~page: int=?,
		~locked: bool=?,
		~initialPage: int=?,
		~tabBarUnderlineStyle: Style.t=?,
		~tabBarBackgroundColor: string=?,
		~tabBarActiveTextColor: string=?,
		~tabBarInactiveTextColor: string=?,
		~tabBarTextStyle: Style.t=?,
		~tabContainerStyle: Style.t=?,
		~contentProps: 'scrollViewProps=?,
		~scrollWithoutAnimation: bool=?,
		~prerenderingSiblingsNumber: int=?,
    ~style: Style.t=?,
    ~testID: string=?,
    ~children: React.element=?
  ) => React.element = "Tabs";