{
    "cmake.configureOnOpen": true,
    "editor.fontSize": 14,
    "workbench.iconTheme": "vscode-icons",
    "workbench.editor.autoLockGroups": {
        "imagePreview.previewEditor": true,
        "jupyter-notebook": true
    },
    
    "C_Cpp.autocompleteAddParentheses": true,
    "git.confirmSync": false,
    "git.autofetch": true,
    "git.enableSmartCommit": true,
    "omnisharp.monoPath": "/Library/Frameworks/Mono.framework/Versions/Current/Commands/mono",
    "omnisharp.useGlobalMono": "always",
    
    // 屏蔽某种类型文件，当这种类型无用时且烦人
    "files.exclude": {
        "**/*.csproj": false,
        "**/*.meta": true
    },
    
    
    "security.workspace.trust.untrustedFiles": "open",
    "vsicons.dontShowNewVersionMessage": true,
    "vscodeGoogleTranslate.preferredLanguage": "Chinese (Simplified)",


    // ?不知道什么配置
    "explorer.confirmDragAndDrop": false,
    "explorer.confirmDelete": false,

    
    // koroFileHeader 文件注释插件
    "window.zoomLevel": 0,
    "terminal.integrated.rendererType": "dom",
    "editor.formatOnSave": true,
    "eslint.lintTask.enable": true,
    "vetur.validation.template": false,
    "typescript.updateImportsOnFileMove.enabled": "always",
    "editor.codeActionsOnSave": {
        "source.fixAll.eslint": true
    },
    "javascript.updateImportsOnFileMove.enabled": "always",
    "fileheader.customMade": { // 头部注释
        "Author": "秦武胜",
        "Date": "Do not edit",
        "LastEditors": "秦武胜",
        "LastEditTime": "Do not edit",
        "Description": "file content",
        "FilePath": "Do not edit" // 增加此项配置即可
    },
    "fileheader.cursorMode": { // 头部注释
        "description": "",
        "param": "params",
        "return": ""
    },
    "fileheader.configObj": {
        "autoAdd": true, // 默认开启自动添加头部注释，当文件没有设置头部注释时保存会自动添加
        "autoAlready": true, // 默认开启
        "prohibitAutoAdd": [
            "json",
            "md"
        ], // 禁止.json .md文件，自动添加头部注释
        "wideSame": false, // 设置为true开启
        "wideNum": 13 // 字段长度 默认为13
    },
    // end koroFileHeader 文件注释插件

 /**

 // 文件头部注释
"fileheader.customMade": {
    "Descripttion":"",
    "version":"",
    "Author":"秦武胜",
    "Date":"Do not edit",
    "LastEditors":"秦武胜",
    "LastEditTime":"Do not Edit"
},
//函数注释
"fileheader.cursorMode": {

    "name":"",
    "test":"test font",
    "msg":"",
    "param":"type param",
    "return":"type"
},

*/
}