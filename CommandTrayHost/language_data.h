﻿
// https://msdn.microsoft.com/en-us/library/cc233982.aspx

// You must use strict format of json format
const nlohmann::json language_alias = u8R"json({
    "zh-Hans": "zh-CN",
    "zh": "zh-CN",
    "zh-SG": "zh-CN"
})json"_json;
const nlohmann::json language_data = u8R"json({
    "en-US": {
        "Hide All": "Hide All",
        "Disable All": "Disable All",
        "Enable All": "Enable All",
        "Show All": "Show All",
        "All": "All",
        "Start on Boot": "Start on Boot",
        "Elevate": "Elevate",
        "Show": "Show",
        "Hide": "Hide",
        "Reload": "Reload",
        "Home": "Home",
        "About": "About",
        "Help": "Help",
        "Exit": "Exit",
        "<None>": "<None>",
        "Set IE Proxy": "Set IE Proxy",
        "Daemon": "Daemon",
        "Enable": "Enable",
        "Disable": "Disable",
        "Restart Command": "Restart Command",
        "Run As Administrator": "Run As Administrator"
    }
})json"_json;

/************************************************************************/
/*  Example:
 *  
 *  ,"test-CN": {
		"Hide All": "隐藏全部test",
		"Disable All": "全部禁用test",
		"Enable All": "全部启动test",
		"Show All": "全部显示test",
		"All": "全部test",
		"Start on Boot": "开机启动test",
		"Elevate": "提权test",
		"Show": "显示test",
		"Hide": "隐藏test",
		"Reload": "重启命令test",
		"Home": "主页test",
		"About": "关于test",
		"Help": "帮助test",
		"Exit": "退出test",
		"<None>": "<None>",
		"Set IE Proxy": "设置IE代理test",
		"Daemon": "应用test",
		"Enable": "启用test",
		"Disable": "停用test",
		"Restart Command": "重启命令test",
		"Run As Administrator": "管理员运行test"
	}                                                                     */
/************************************************************************/