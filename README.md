# electron-call-dll-with-string

calling functions with string param/return in dll with electronjs 
在 electronjs 中调用带有字符串参数/返回值的 dll 函数


## 文件结构

- dll_project vs2019，包含dll和控制台测试调用
- electron_app electron项目，拷贝对应x86/64版本dll过来才可运行

## 代码效果
```
//use ffi and ref to interface with a c style dll
var ffi = require('ffi-napi');

//load the dll. The dll is located in the current folder and named customlib.dll
var customlibProp = ffi.Library('Dll1', {
  'concat': ['char *', ['char *', 'char *']]
});


function concat(str1, str2) {
  let buf= customlibProp.concat(
    Buffer.from(str1, 'utf-8'),
    Buffer.from(str2, 'utf-8'))

    // console.log(typeof buf,)
    return buf.readCString()
}


console.log(concat('abc', 'def'))
console.log(concat('中文', '英文'))

console.log(concat('very veryvery veryvery veryvery veryvery veryvery veryvery veryvery veryvery veryvery veryvery veryvery veryvery veryvery veryvery veryvery veryvery veryvery veryvery veryvery veryvery veryvery veryvery veryvery veryvery veryvery veryvery veryvery very'
, 'long long long long long long long long long long long long long long long long long long long long long long long long long long long long long long long long long long long long long long long long long long long long long long long long long long long long long long long long long long '))


console.log(concat('很长很长很长很长很长很长很长很长很长很长很长很长很长很长很长很长很长很长很长很长很长很长很长很长很长很长很长很长很长很长很长很长很长很长很长很长很长很长很长很长很长很长'
, '的文字的文字的文字的文字的文字的文字的文字的文字的文字的文字的文字的文字的文字的文字的文字的文字的文字的文字的文字的文字的文字的文字的文字的文字的文字的文字的文字的文字的文字的文字的文字的文字的文字的文字的文字的文字的文字的文字的文字的文字的文字的文字的文字的文字'))
```
![screenshot](./screenshot.png)