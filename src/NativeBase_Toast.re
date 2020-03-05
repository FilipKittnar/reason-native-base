type config;

[@bs.obj]
external config:
  (
    ~text: string=?,
    ~_type: [@bs.string] [ | `danger | `success | `warning]=?,
    ~buttonText: string=?,
    ~duration: int=?,
    ~onClose: string => unit=?,
    unit
  ) =>
  config;

[@bs.module "native-base"] [@bs.scope "Toast"]
external show: (~config: config=?, unit) => unit = "show";

[@bs.module "native-base"] [@bs.scope "Toast"]
external hide: unit => unit = "hide";