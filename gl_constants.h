/* vim: set ai noet ts=4 sw=4 tw=115: */
//
// Copyright (c) 2014 Nikolay Zapolnov (zapolnov@gmail.com).
//
// Permission is hereby granted, free of charge, to any person obtaining a copy
// of this software and associated documentation files (the "Software"), to deal
// in the Software without restriction, including without limitation the rights
// to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
// copies of the Software, and to permit persons to whom the Software is
// furnished to do so, subject to the following conditions:
//
// The above copyright notice and this permission notice shall be included in
// all copies or substantial portions of the Software.
//
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
// IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
// FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
// AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
// LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
// OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
// THE SOFTWARE.
//

GL_CONSTANT(DEPTH_BUFFER_BIT, 0x00000100)
GL_CONSTANT(STENCIL_BUFFER_BIT, 0x00000400)
GL_CONSTANT(COLOR_BUFFER_BIT, 0x00004000)
GL_CONSTANT(LINE_LOOP, 0x0002)
GL_CONSTANT(LINE_STRIP, 0x0003)
GL_CONSTANT(TRIANGLES, 0x0004)
GL_CONSTANT(TRIANGLE_STRIP, 0x0005)
GL_CONSTANT(TRIANGLE_FAN, 0x0006)
GL_CONSTANT(SRC_COLOR, 0x0300)
GL_CONSTANT(ONE_MINUS_SRC_COLOR, 0x0301)
GL_CONSTANT(SRC_ALPHA, 0x0302)
GL_CONSTANT(ONE_MINUS_SRC_ALPHA, 0x0303)
GL_CONSTANT(DST_ALPHA, 0x0304)
GL_CONSTANT(ONE_MINUS_DST_ALPHA, 0x0305)
GL_CONSTANT(DST_COLOR, 0x0306)
GL_CONSTANT(ONE_MINUS_DST_COLOR, 0x0307)
GL_CONSTANT(SRC_ALPHA_SATURATE, 0x0308)
GL_CONSTANT(FUNC_ADD, 0x8006)
GL_CONSTANT(BLEND_EQUATION_RGB, 0x8009)
GL_CONSTANT(BLEND_EQUATION_ALPHA, 0x883D)
GL_CONSTANT(FUNC_SUBTRACT, 0x800A)
GL_CONSTANT(FUNC_REVERSE_SUBTRACT, 0x800B)
GL_CONSTANT(BLEND_DST_RGB, 0x80C8)
GL_CONSTANT(BLEND_SRC_RGB, 0x80C9)
GL_CONSTANT(BLEND_DST_ALPHA, 0x80CA)
GL_CONSTANT(BLEND_SRC_ALPHA, 0x80CB)
GL_CONSTANT(CONSTANT_COLOR, 0x8001)
GL_CONSTANT(ONE_MINUS_CONSTANT_COLOR, 0x8002)
GL_CONSTANT(CONSTANT_ALPHA, 0x8003)
GL_CONSTANT(ONE_MINUS_CONSTANT_ALPHA, 0x8004)
GL_CONSTANT(BLEND_COLOR, 0x8005)
GL_CONSTANT(ARRAY_BUFFER, 0x8892)
GL_CONSTANT(ELEMENT_ARRAY_BUFFER, 0x8893)
GL_CONSTANT(ARRAY_BUFFER_BINDING, 0x8894)
GL_CONSTANT(ELEMENT_ARRAY_BUFFER_BINDING, 0x8895)
GL_CONSTANT(STREAM_DRAW, 0x88E0)
GL_CONSTANT(STATIC_DRAW, 0x88E4)
GL_CONSTANT(DYNAMIC_DRAW, 0x88E8)
GL_CONSTANT(BUFFER_SIZE, 0x8764)
GL_CONSTANT(BUFFER_USAGE, 0x8765)
GL_CONSTANT(CURRENT_VERTEX_ATTRIB, 0x8626)
GL_CONSTANT(FRONT, 0x0404)
GL_CONSTANT(BACK, 0x0405)
GL_CONSTANT(FRONT_AND_BACK, 0x0408)
GL_CONSTANT(TEXTURE_2D, 0x0DE1)
GL_CONSTANT(CULL_FACE, 0x0B44)
GL_CONSTANT(BLEND, 0x0BE2)
GL_CONSTANT(DITHER, 0x0BD0)
GL_CONSTANT(STENCIL_TEST, 0x0B90)
GL_CONSTANT(DEPTH_TEST, 0x0B71)
GL_CONSTANT(SCISSOR_TEST, 0x0C11)
GL_CONSTANT(POLYGON_OFFSET_FILL, 0x8037)
GL_CONSTANT(SAMPLE_ALPHA_TO_COVERAGE, 0x809E)
GL_CONSTANT(SAMPLE_COVERAGE, 0x80A0)
GL_CONSTANT(INVALID_ENUM, 0x0500)
GL_CONSTANT(INVALID_VALUE, 0x0501)
GL_CONSTANT(INVALID_OPERATION, 0x0502)
GL_CONSTANT(OUT_OF_MEMORY, 0x0505)
GL_CONSTANT(CW, 0x0900)
GL_CONSTANT(CCW, 0x0901)
GL_CONSTANT(LINE_WIDTH, 0x0B21)
GL_CONSTANT(ALIASED_POINT_SIZE_RANGE, 0x846D)
GL_CONSTANT(ALIASED_LINE_WIDTH_RANGE, 0x846E)
GL_CONSTANT(CULL_FACE_MODE, 0x0B45)
GL_CONSTANT(FRONT_FACE, 0x0B46)
GL_CONSTANT(DEPTH_RANGE, 0x0B70)
GL_CONSTANT(DEPTH_WRITEMASK, 0x0B72)
GL_CONSTANT(DEPTH_CLEAR_VALUE, 0x0B73)
GL_CONSTANT(DEPTH_FUNC, 0x0B74)
GL_CONSTANT(STENCIL_CLEAR_VALUE, 0x0B91)
GL_CONSTANT(STENCIL_FUNC, 0x0B92)
GL_CONSTANT(STENCIL_FAIL, 0x0B94)
GL_CONSTANT(STENCIL_PASS_DEPTH_FAIL, 0x0B95)
GL_CONSTANT(STENCIL_PASS_DEPTH_PASS, 0x0B96)
GL_CONSTANT(STENCIL_REF, 0x0B97)
GL_CONSTANT(STENCIL_VALUE_MASK, 0x0B93)
GL_CONSTANT(STENCIL_WRITEMASK, 0x0B98)
GL_CONSTANT(STENCIL_BACK_FUNC, 0x8800)
GL_CONSTANT(STENCIL_BACK_FAIL, 0x8801)
GL_CONSTANT(STENCIL_BACK_PASS_DEPTH_FAIL, 0x8802)
GL_CONSTANT(STENCIL_BACK_PASS_DEPTH_PASS, 0x8803)
GL_CONSTANT(STENCIL_BACK_REF, 0x8CA3)
GL_CONSTANT(STENCIL_BACK_VALUE_MASK, 0x8CA4)
GL_CONSTANT(STENCIL_BACK_WRITEMASK, 0x8CA5)
GL_CONSTANT(VIEWPORT, 0x0BA2)
GL_CONSTANT(SCISSOR_BOX, 0x0C10)
GL_CONSTANT(COLOR_CLEAR_VALUE, 0x0C22)
GL_CONSTANT(COLOR_WRITEMASK, 0x0C23)
GL_CONSTANT(UNPACK_ALIGNMENT, 0x0CF5)
GL_CONSTANT(PACK_ALIGNMENT, 0x0D05)
GL_CONSTANT(MAX_TEXTURE_SIZE, 0x0D33)
GL_CONSTANT(MAX_VIEWPORT_DIMS, 0x0D3A)
GL_CONSTANT(SUBPIXEL_BITS, 0x0D50)
GL_CONSTANT(RED_BITS, 0x0D52)
GL_CONSTANT(GREEN_BITS, 0x0D53)
GL_CONSTANT(BLUE_BITS, 0x0D54)
GL_CONSTANT(ALPHA_BITS, 0x0D55)
GL_CONSTANT(DEPTH_BITS, 0x0D56)
GL_CONSTANT(STENCIL_BITS, 0x0D57)
GL_CONSTANT(POLYGON_OFFSET_UNITS, 0x2A00)
GL_CONSTANT(POLYGON_OFFSET_FACTOR, 0x8038)
GL_CONSTANT(TEXTURE_BINDING_2D, 0x8069)
GL_CONSTANT(SAMPLE_BUFFERS, 0x80A8)
GL_CONSTANT(SAMPLES, 0x80A9)
GL_CONSTANT(SAMPLE_COVERAGE_VALUE, 0x80AA)
GL_CONSTANT(SAMPLE_COVERAGE_INVERT, 0x80AB)
GL_CONSTANT(NUM_COMPRESSED_TEXTURE_FORMATS, 0x86A2)
GL_CONSTANT(COMPRESSED_TEXTURE_FORMATS, 0x86A3)
GL_CONSTANT(DONT_CARE, 0x1100)
GL_CONSTANT(FASTEST, 0x1101)
GL_CONSTANT(NICEST, 0x1102)
GL_CONSTANT(GENERATE_MIPMAP_HINT, 0x8192)
GL_CONSTANT(BYTE, 0x1400)
GL_CONSTANT(UNSIGNED_BYTE, 0x1401)
GL_CONSTANT(SHORT, 0x1402)
GL_CONSTANT(UNSIGNED_SHORT, 0x1403)
GL_CONSTANT(INT, 0x1404)
GL_CONSTANT(UNSIGNED_INT, 0x1405)
GL_CONSTANT(FLOAT, 0x1406)
GL_CONSTANT(FIXED, 0x140C)
GL_CONSTANT(DEPTH_COMPONENT, 0x1902)
GL_CONSTANT(ALPHA, 0x1906)
GL_CONSTANT(RGB, 0x1907)
GL_CONSTANT(RGBA, 0x1908)
GL_CONSTANT(LUMINANCE, 0x1909)
GL_CONSTANT(LUMINANCE_ALPHA, 0x190A)
GL_CONSTANT(UNSIGNED_SHORT_4_4_4_4, 0x8033)
GL_CONSTANT(UNSIGNED_SHORT_5_5_5_1, 0x8034)
GL_CONSTANT(UNSIGNED_SHORT_5_6_5, 0x8363)
GL_CONSTANT(FRAGMENT_SHADER, 0x8B30)
GL_CONSTANT(VERTEX_SHADER, 0x8B31)
GL_CONSTANT(MAX_VERTEX_ATTRIBS, 0x8869)
GL_CONSTANT(MAX_VERTEX_UNIFORM_VECTORS, 0x8DFB)
GL_CONSTANT(MAX_VARYING_VECTORS, 0x8DFC)
GL_CONSTANT(MAX_COMBINED_TEXTURE_IMAGE_UNITS, 0x8B4D)
GL_CONSTANT(MAX_VERTEX_TEXTURE_IMAGE_UNITS, 0x8B4C)
GL_CONSTANT(MAX_TEXTURE_IMAGE_UNITS, 0x8872)
GL_CONSTANT(MAX_FRAGMENT_UNIFORM_VECTORS, 0x8DFD)
GL_CONSTANT(SHADER_TYPE, 0x8B4F)
GL_CONSTANT(DELETE_STATUS, 0x8B80)
GL_CONSTANT(LINK_STATUS, 0x8B82)
GL_CONSTANT(VALIDATE_STATUS, 0x8B83)
GL_CONSTANT(ATTACHED_SHADERS, 0x8B85)
GL_CONSTANT(ACTIVE_UNIFORMS, 0x8B86)
GL_CONSTANT(ACTIVE_UNIFORM_MAX_LENGTH, 0x8B87)
GL_CONSTANT(ACTIVE_ATTRIBUTES, 0x8B89)
GL_CONSTANT(ACTIVE_ATTRIBUTE_MAX_LENGTH, 0x8B8A)
GL_CONSTANT(SHADING_LANGUAGE_VERSION, 0x8B8C)
GL_CONSTANT(CURRENT_PROGRAM, 0x8B8D)
GL_CONSTANT(NEVER, 0x0200)
GL_CONSTANT(LESS, 0x0201)
GL_CONSTANT(EQUAL, 0x0202)
GL_CONSTANT(LEQUAL, 0x0203)
GL_CONSTANT(GREATER, 0x0204)
GL_CONSTANT(NOTEQUAL, 0x0205)
GL_CONSTANT(GEQUAL, 0x0206)
GL_CONSTANT(ALWAYS, 0x0207)
GL_CONSTANT(KEEP, 0x1E00)
GL_CONSTANT(REPLACE, 0x1E01)
GL_CONSTANT(INCR, 0x1E02)
GL_CONSTANT(DECR, 0x1E03)
GL_CONSTANT(INVERT, 0x150A)
GL_CONSTANT(INCR_WRAP, 0x8507)
GL_CONSTANT(DECR_WRAP, 0x8508)
GL_CONSTANT(VENDOR, 0x1F00)
GL_CONSTANT(RENDERER, 0x1F01)
GL_CONSTANT(VERSION, 0x1F02)
GL_CONSTANT(EXTENSIONS, 0x1F03)
GL_CONSTANT(NEAREST, 0x2600)
GL_CONSTANT(LINEAR, 0x2601)
GL_CONSTANT(NEAREST_MIPMAP_NEAREST, 0x2700)
GL_CONSTANT(LINEAR_MIPMAP_NEAREST, 0x2701)
GL_CONSTANT(NEAREST_MIPMAP_LINEAR, 0x2702)
GL_CONSTANT(LINEAR_MIPMAP_LINEAR, 0x2703)
GL_CONSTANT(TEXTURE_MAG_FILTER, 0x2800)
GL_CONSTANT(TEXTURE_MIN_FILTER, 0x2801)
GL_CONSTANT(TEXTURE_WRAP_S, 0x2802)
GL_CONSTANT(TEXTURE_WRAP_T, 0x2803)
GL_CONSTANT(TEXTURE, 0x1702)
GL_CONSTANT(TEXTURE_CUBE_MAP, 0x8513)
GL_CONSTANT(TEXTURE_BINDING_CUBE_MAP, 0x8514)
GL_CONSTANT(TEXTURE_CUBE_MAP_POSITIVE_X, 0x8515)
GL_CONSTANT(TEXTURE_CUBE_MAP_NEGATIVE_X, 0x8516)
GL_CONSTANT(TEXTURE_CUBE_MAP_POSITIVE_Y, 0x8517)
GL_CONSTANT(TEXTURE_CUBE_MAP_NEGATIVE_Y, 0x8518)
GL_CONSTANT(TEXTURE_CUBE_MAP_POSITIVE_Z, 0x8519)
GL_CONSTANT(TEXTURE_CUBE_MAP_NEGATIVE_Z, 0x851A)
GL_CONSTANT(MAX_CUBE_MAP_TEXTURE_SIZE, 0x851C)
GL_CONSTANT(TEXTURE0, 0x84C0)
GL_CONSTANT(TEXTURE1, 0x84C1)
GL_CONSTANT(TEXTURE2, 0x84C2)
GL_CONSTANT(TEXTURE3, 0x84C3)
GL_CONSTANT(TEXTURE4, 0x84C4)
GL_CONSTANT(TEXTURE5, 0x84C5)
GL_CONSTANT(TEXTURE6, 0x84C6)
GL_CONSTANT(TEXTURE7, 0x84C7)
GL_CONSTANT(TEXTURE8, 0x84C8)
GL_CONSTANT(TEXTURE9, 0x84C9)
GL_CONSTANT(TEXTURE10, 0x84CA)
GL_CONSTANT(TEXTURE11, 0x84CB)
GL_CONSTANT(TEXTURE12, 0x84CC)
GL_CONSTANT(TEXTURE13, 0x84CD)
GL_CONSTANT(TEXTURE14, 0x84CE)
GL_CONSTANT(TEXTURE15, 0x84CF)
GL_CONSTANT(TEXTURE16, 0x84D0)
GL_CONSTANT(TEXTURE17, 0x84D1)
GL_CONSTANT(TEXTURE18, 0x84D2)
GL_CONSTANT(TEXTURE19, 0x84D3)
GL_CONSTANT(TEXTURE20, 0x84D4)
GL_CONSTANT(TEXTURE21, 0x84D5)
GL_CONSTANT(TEXTURE22, 0x84D6)
GL_CONSTANT(TEXTURE23, 0x84D7)
GL_CONSTANT(TEXTURE24, 0x84D8)
GL_CONSTANT(TEXTURE25, 0x84D9)
GL_CONSTANT(TEXTURE26, 0x84DA)
GL_CONSTANT(TEXTURE27, 0x84DB)
GL_CONSTANT(TEXTURE28, 0x84DC)
GL_CONSTANT(TEXTURE29, 0x84DD)
GL_CONSTANT(TEXTURE30, 0x84DE)
GL_CONSTANT(TEXTURE31, 0x84DF)
GL_CONSTANT(ACTIVE_TEXTURE, 0x84E0)
GL_CONSTANT(REPEAT, 0x2901)
GL_CONSTANT(CLAMP_TO_EDGE, 0x812F)
GL_CONSTANT(MIRRORED_REPEAT, 0x8370)
GL_CONSTANT(FLOAT_VEC2, 0x8B50)
GL_CONSTANT(FLOAT_VEC3, 0x8B51)
GL_CONSTANT(FLOAT_VEC4, 0x8B52)
GL_CONSTANT(INT_VEC2, 0x8B53)
GL_CONSTANT(INT_VEC3, 0x8B54)
GL_CONSTANT(INT_VEC4, 0x8B55)
GL_CONSTANT(BOOL, 0x8B56)
GL_CONSTANT(BOOL_VEC2, 0x8B57)
GL_CONSTANT(BOOL_VEC3, 0x8B58)
GL_CONSTANT(BOOL_VEC4, 0x8B59)
GL_CONSTANT(FLOAT_MAT2, 0x8B5A)
GL_CONSTANT(FLOAT_MAT3, 0x8B5B)
GL_CONSTANT(FLOAT_MAT4, 0x8B5C)
GL_CONSTANT(SAMPLER_2D, 0x8B5E)
GL_CONSTANT(SAMPLER_CUBE, 0x8B60)
GL_CONSTANT(VERTEX_ATTRIB_ARRAY_ENABLED, 0x8622)
GL_CONSTANT(VERTEX_ATTRIB_ARRAY_SIZE, 0x8623)
GL_CONSTANT(VERTEX_ATTRIB_ARRAY_STRIDE, 0x8624)
GL_CONSTANT(VERTEX_ATTRIB_ARRAY_TYPE, 0x8625)
GL_CONSTANT(VERTEX_ATTRIB_ARRAY_NORMALIZED, 0x886A)
GL_CONSTANT(VERTEX_ATTRIB_ARRAY_POINTER, 0x8645)
GL_CONSTANT(VERTEX_ATTRIB_ARRAY_BUFFER_BINDING, 0x889F)
GL_CONSTANT(IMPLEMENTATION_COLOR_READ_TYPE, 0x8B9A)
GL_CONSTANT(IMPLEMENTATION_COLOR_READ_FORMAT, 0x8B9B)
GL_CONSTANT(COMPILE_STATUS, 0x8B81)
GL_CONSTANT(INFO_LOG_LENGTH, 0x8B84)
GL_CONSTANT(SHADER_SOURCE_LENGTH, 0x8B88)
GL_CONSTANT(SHADER_COMPILER, 0x8DFA)
GL_CONSTANT(SHADER_BINARY_FORMATS, 0x8DF8)
GL_CONSTANT(NUM_SHADER_BINARY_FORMATS, 0x8DF9)
GL_CONSTANT(LOW_FLOAT, 0x8DF0)
GL_CONSTANT(MEDIUM_FLOAT, 0x8DF1)
GL_CONSTANT(HIGH_FLOAT, 0x8DF2)
GL_CONSTANT(LOW_INT, 0x8DF3)
GL_CONSTANT(MEDIUM_INT, 0x8DF4)
GL_CONSTANT(HIGH_INT, 0x8DF5)
GL_CONSTANT(FRAMEBUFFER, 0x8D40)
GL_CONSTANT(RENDERBUFFER, 0x8D41)
GL_CONSTANT(RGBA4, 0x8056)
GL_CONSTANT(RGB5_A1, 0x8057)
GL_CONSTANT(RGB565, 0x8D62)
GL_CONSTANT(DEPTH_COMPONENT16, 0x81A5)
GL_CONSTANT(STENCIL_INDEX, 0x1901)
GL_CONSTANT(STENCIL_INDEX8, 0x8D48)
GL_CONSTANT(RENDERBUFFER_WIDTH, 0x8D42)
GL_CONSTANT(RENDERBUFFER_HEIGHT, 0x8D43)
GL_CONSTANT(RENDERBUFFER_INTERNAL_FORMAT, 0x8D44)
GL_CONSTANT(RENDERBUFFER_RED_SIZE, 0x8D50)
GL_CONSTANT(RENDERBUFFER_GREEN_SIZE, 0x8D51)
GL_CONSTANT(RENDERBUFFER_BLUE_SIZE, 0x8D52)
GL_CONSTANT(RENDERBUFFER_ALPHA_SIZE, 0x8D53)
GL_CONSTANT(RENDERBUFFER_DEPTH_SIZE, 0x8D54)
GL_CONSTANT(RENDERBUFFER_STENCIL_SIZE, 0x8D55)
GL_CONSTANT(FRAMEBUFFER_ATTACHMENT_OBJECT_TYPE, 0x8CD0)
GL_CONSTANT(FRAMEBUFFER_ATTACHMENT_OBJECT_NAME, 0x8CD1)
GL_CONSTANT(FRAMEBUFFER_ATTACHMENT_TEXTURE_LEVEL, 0x8CD2)
GL_CONSTANT(FRAMEBUFFER_ATTACHMENT_TEXTURE_CUBE_MAP_FACE, 0x8CD3)
GL_CONSTANT(COLOR_ATTACHMENT0, 0x8CE0)
GL_CONSTANT(DEPTH_ATTACHMENT, 0x8D00)
GL_CONSTANT(STENCIL_ATTACHMENT, 0x8D20)
GL_CONSTANT(FRAMEBUFFER_COMPLETE, 0x8CD5)
GL_CONSTANT(FRAMEBUFFER_INCOMPLETE_ATTACHMENT, 0x8CD6)
GL_CONSTANT(FRAMEBUFFER_INCOMPLETE_MISSING_ATTACHMENT, 0x8CD7)
GL_CONSTANT(FRAMEBUFFER_INCOMPLETE_DIMENSIONS, 0x8CD9)
GL_CONSTANT(FRAMEBUFFER_UNSUPPORTED, 0x8CDD)
GL_CONSTANT(FRAMEBUFFER_BINDING, 0x8CA6)
GL_CONSTANT(RENDERBUFFER_BINDING, 0x8CA7)
GL_CONSTANT(MAX_RENDERBUFFER_SIZE, 0x84E8)
GL_CONSTANT(INVALID_FRAMEBUFFER_OPERATION, 0x0506)
