open ReactNative;
include NativeElement;

[@react.component] [@bs.module "native-base"]
external make:
  (
    ~ref: ref=?,
    ~goToPage: int => unit=?,
		~activeTab: int=?,
		~tabs: array('tab)=?,
		~backgroundColor: string=?,
		~activeTextColor: string=?,
		~inactiveTextColor: string=?,
		~scrollOffset: int=?,
		~tabStyle: Style.t=?,
		~tabsContainerStyle: Style.t=?,
		~renderTab: unit => React.element=?,
		~underlineStyle: Style.t=?,
		~onScroll: Event.scrollEvent => unit=?,
    ~style: Style.t=?,
    ~testID: string=?,
    ~children: React.element=?
  ) => React.element = "ScrollableTab";