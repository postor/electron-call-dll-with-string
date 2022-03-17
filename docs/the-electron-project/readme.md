# electron项目

测试在 electron 中调用 dll

## 步骤

如果使用源代码直接调到【安装依赖】

初始化项目

```
npm init -y
npm i electron ffi-napi -S 
```

添加代码
- [index.js](../../electron_app/index.js)
- [index.html](../../electron_app/index.html)
- [test.js](../../electron_app/test.js)

添加启动命令 [package.json](../../electron_app/package.json)

```
  "scripts": {
    "start": "electron ."
  },
```

安装依赖

```
npm i
```

拷贝 dll 到项目目录

```
cp /path/to/dll ./
```

启动项目

```
yarn start
```