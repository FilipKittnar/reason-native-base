open ReactNative;
include NativeElement;

[@react.component] [@bs.module "native-base"]
external make:
  (
    ~ref: ref=?,
    ~defaultDate: Js.Date.t=?,
		~minimumDate: Js.Date.t=?,
		~maximumDate: Js.Date.t=?,
		~locale: string=?,
		~placeHolderText: string=?,
		~textStyle: Style.t=?,
		~placeHolderTextStyle: Style.t=?,
		~androidMode: [@bs.string] [ `calendar | `spinner | `default ]=?,
		~timeZoneOffsetInMinutes: int=?,
		~modalTransparent: bool=?,
		~animationType: [@bs.string] [ `slide | `fade | `none ]=?,
		~disabled: bool=?,
		~onDateChange: (Js.Date.t) => unit=?,
		~formatChosenDate: (Js.Date.t) => unit=?,
    ~style: Style.t=?,
    ~testID: string=?,
    ~children: React.element=?
  ) => React.element = "DatePicker";