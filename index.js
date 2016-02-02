var ffi = require('ffi');
var ref = require('ref');
var Struct = require('ref-struct')
var ArrayType = require('ref-array')
var DoubleArrayType = ArrayType('double')

var libfoo = ffi.Library('libfoo', {
    'fill_with_shit' : [ 'void', [ 'string', 'int' ] ],
    'fill_with_shitd' : [ 'void', [ DoubleArrayType, 'int' ] ]
});

var width = 6;

// with cstrings
target = ref.allocCString("\0".repeat(width))
console.log('(cstring) before: ' + ref.readCString(target))
libfoo.fill_with_shit(target, width)
console.log('(cstring) filled: ' + ref.readCString(target))

target_d = DoubleArrayType(2)
console.log('(double): before: ' + target_d)
libfoo.fill_with_shitd(target_d, 2)
console.log('(double): after: ' + target_d)

