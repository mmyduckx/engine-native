/****************************************************************************
 Copyright (c) 2019-2021 Xiamen Yaji Software Co., Ltd.

 http://www.cocos.com

 Permission is hereby granted, free of charge, to any person obtaining a copy
 of this software and associated engine source code (the "Software"), a limited,
 worldwide, royalty-free, non-assignable, revocable and non-exclusive license
 to use Cocos Creator solely to develop games on your target platforms. You shall
 not use Cocos Creator software for developing other software or tools that's
 used for developing games. You are not granted to publish, distribute,
 sublicense, and/or sell copies of Cocos Creator.

 The software or tools in this License Agreement are licensed, not sold.
 Xiamen Yaji Software Co., Ltd. reserves all rights not expressly granted to you.

 THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 THE SOFTWARE.
****************************************************************************/
#ifndef __OHOS__
    #define GL_GLES_PROTOTYPES 0
    #include <GLES2/gl2.h>
    #include <GLES2/gl2ext.h>
    #include <GLES2/gl2platform.h>
#else
    #define GL_GLES_PROTOTYPES 0
    #include <GLES3/gl32.h>
    #include <GLES3/gl3platform.h>
#endif
#include <KHR/khrplatform.h>

#include "gles2w.h"

/**
 * ========================= !DO NOT CHANGE THE FOLLOWING SECTION MANUALLY! =========================
 * The following section is auto-generated from GLES spec by running:
 * node tools/gles-wrangler-generator/generate.js
 * ========================= !DO NOT CHANGE THE FOLLOWING SECTION MANUALLY! =========================
 */

/* GLES2W_GENERATE_GLES_DEFINITION */
/* GL_ES_VERSION_2_0 */
PFNGLACTIVETEXTUREPROC                       glActiveTexture;
PFNGLATTACHSHADERPROC                        glAttachShader;
PFNGLBINDATTRIBLOCATIONPROC                  glBindAttribLocation;
PFNGLBINDBUFFERPROC                          glBindBuffer;
PFNGLBINDFRAMEBUFFERPROC                     glBindFramebuffer;
PFNGLBINDRENDERBUFFERPROC                    glBindRenderbuffer;
PFNGLBINDTEXTUREPROC                         glBindTexture;
PFNGLBLENDCOLORPROC                          glBlendColor;
PFNGLBLENDEQUATIONPROC                       glBlendEquation;
PFNGLBLENDEQUATIONSEPARATEPROC               glBlendEquationSeparate;
PFNGLBLENDFUNCPROC                           glBlendFunc;
PFNGLBLENDFUNCSEPARATEPROC                   glBlendFuncSeparate;
PFNGLBUFFERDATAPROC                          glBufferData;
PFNGLBUFFERSUBDATAPROC                       glBufferSubData;
PFNGLCHECKFRAMEBUFFERSTATUSPROC              glCheckFramebufferStatus;
PFNGLCLEARPROC                               glClear;
PFNGLCLEARCOLORPROC                          glClearColor;
PFNGLCLEARDEPTHFPROC                         glClearDepthf;
PFNGLCLEARSTENCILPROC                        glClearStencil;
PFNGLCOLORMASKPROC                           glColorMask;
PFNGLCOMPILESHADERPROC                       glCompileShader;
PFNGLCOMPRESSEDTEXIMAGE2DPROC                glCompressedTexImage2D;
PFNGLCOMPRESSEDTEXSUBIMAGE2DPROC             glCompressedTexSubImage2D;
PFNGLCOPYTEXIMAGE2DPROC                      glCopyTexImage2D;
PFNGLCOPYTEXSUBIMAGE2DPROC                   glCopyTexSubImage2D;
PFNGLCREATEPROGRAMPROC                       glCreateProgram;
PFNGLCREATESHADERPROC                        glCreateShader;
PFNGLCULLFACEPROC                            glCullFace;
PFNGLDELETEBUFFERSPROC                       glDeleteBuffers;
PFNGLDELETEFRAMEBUFFERSPROC                  glDeleteFramebuffers;
PFNGLDELETEPROGRAMPROC                       glDeleteProgram;
PFNGLDELETERENDERBUFFERSPROC                 glDeleteRenderbuffers;
PFNGLDELETESHADERPROC                        glDeleteShader;
PFNGLDELETETEXTURESPROC                      glDeleteTextures;
PFNGLDEPTHFUNCPROC                           glDepthFunc;
PFNGLDEPTHMASKPROC                           glDepthMask;
PFNGLDEPTHRANGEFPROC                         glDepthRangef;
PFNGLDETACHSHADERPROC                        glDetachShader;
PFNGLDISABLEPROC                             glDisable;
PFNGLDISABLEVERTEXATTRIBARRAYPROC            glDisableVertexAttribArray;
PFNGLDRAWARRAYSPROC                          glDrawArrays;
PFNGLDRAWELEMENTSPROC                        glDrawElements;
PFNGLENABLEPROC                              glEnable;
PFNGLENABLEVERTEXATTRIBARRAYPROC             glEnableVertexAttribArray;
PFNGLFINISHPROC                              glFinish;
PFNGLFLUSHPROC                               glFlush;
PFNGLFRAMEBUFFERRENDERBUFFERPROC             glFramebufferRenderbuffer;
PFNGLFRAMEBUFFERTEXTURE2DPROC                glFramebufferTexture2D;
PFNGLFRONTFACEPROC                           glFrontFace;
PFNGLGENBUFFERSPROC                          glGenBuffers;
PFNGLGENERATEMIPMAPPROC                      glGenerateMipmap;
PFNGLGENFRAMEBUFFERSPROC                     glGenFramebuffers;
PFNGLGENRENDERBUFFERSPROC                    glGenRenderbuffers;
PFNGLGENTEXTURESPROC                         glGenTextures;
PFNGLGETACTIVEATTRIBPROC                     glGetActiveAttrib;
PFNGLGETACTIVEUNIFORMPROC                    glGetActiveUniform;
PFNGLGETATTACHEDSHADERSPROC                  glGetAttachedShaders;
PFNGLGETATTRIBLOCATIONPROC                   glGetAttribLocation;
PFNGLGETBOOLEANVPROC                         glGetBooleanv;
PFNGLGETBUFFERPARAMETERIVPROC                glGetBufferParameteriv;
PFNGLGETERRORPROC                            glGetError;
PFNGLGETFLOATVPROC                           glGetFloatv;
PFNGLGETFRAMEBUFFERATTACHMENTPARAMETERIVPROC glGetFramebufferAttachmentParameteriv;
PFNGLGETINTEGERVPROC                         glGetIntegerv;
PFNGLGETPROGRAMIVPROC                        glGetProgramiv;
PFNGLGETPROGRAMINFOLOGPROC                   glGetProgramInfoLog;
PFNGLGETRENDERBUFFERPARAMETERIVPROC          glGetRenderbufferParameteriv;
PFNGLGETSHADERIVPROC                         glGetShaderiv;
PFNGLGETSHADERINFOLOGPROC                    glGetShaderInfoLog;
PFNGLGETSHADERPRECISIONFORMATPROC            glGetShaderPrecisionFormat;
PFNGLGETSHADERSOURCEPROC                     glGetShaderSource;
PFNGLGETSTRINGPROC                           glGetString;
PFNGLGETTEXPARAMETERFVPROC                   glGetTexParameterfv;
PFNGLGETTEXPARAMETERIVPROC                   glGetTexParameteriv;
PFNGLGETUNIFORMFVPROC                        glGetUniformfv;
PFNGLGETUNIFORMIVPROC                        glGetUniformiv;
PFNGLGETUNIFORMLOCATIONPROC                  glGetUniformLocation;
PFNGLGETVERTEXATTRIBFVPROC                   glGetVertexAttribfv;
PFNGLGETVERTEXATTRIBIVPROC                   glGetVertexAttribiv;
PFNGLGETVERTEXATTRIBPOINTERVPROC             glGetVertexAttribPointerv;
PFNGLHINTPROC                                glHint;
PFNGLISBUFFERPROC                            glIsBuffer;
PFNGLISENABLEDPROC                           glIsEnabled;
PFNGLISFRAMEBUFFERPROC                       glIsFramebuffer;
PFNGLISPROGRAMPROC                           glIsProgram;
PFNGLISRENDERBUFFERPROC                      glIsRenderbuffer;
PFNGLISSHADERPROC                            glIsShader;
PFNGLISTEXTUREPROC                           glIsTexture;
PFNGLLINEWIDTHPROC                           glLineWidth;
PFNGLLINKPROGRAMPROC                         glLinkProgram;
PFNGLPIXELSTOREIPROC                         glPixelStorei;
PFNGLPOLYGONOFFSETPROC                       glPolygonOffset;
PFNGLREADPIXELSPROC                          glReadPixels;
PFNGLRELEASESHADERCOMPILERPROC               glReleaseShaderCompiler;
PFNGLRENDERBUFFERSTORAGEPROC                 glRenderbufferStorage;
PFNGLSAMPLECOVERAGEPROC                      glSampleCoverage;
PFNGLSCISSORPROC                             glScissor;
PFNGLSHADERBINARYPROC                        glShaderBinary;
PFNGLSHADERSOURCEPROC                        glShaderSource;
PFNGLSTENCILFUNCPROC                         glStencilFunc;
PFNGLSTENCILFUNCSEPARATEPROC                 glStencilFuncSeparate;
PFNGLSTENCILMASKPROC                         glStencilMask;
PFNGLSTENCILMASKSEPARATEPROC                 glStencilMaskSeparate;
PFNGLSTENCILOPPROC                           glStencilOp;
PFNGLSTENCILOPSEPARATEPROC                   glStencilOpSeparate;
PFNGLTEXIMAGE2DPROC                          glTexImage2D;
PFNGLTEXPARAMETERFPROC                       glTexParameterf;
PFNGLTEXPARAMETERFVPROC                      glTexParameterfv;
PFNGLTEXPARAMETERIPROC                       glTexParameteri;
PFNGLTEXPARAMETERIVPROC                      glTexParameteriv;
PFNGLTEXSUBIMAGE2DPROC                       glTexSubImage2D;
PFNGLUNIFORM1FPROC                           glUniform1f;
PFNGLUNIFORM1FVPROC                          glUniform1fv;
PFNGLUNIFORM1IPROC                           glUniform1i;
PFNGLUNIFORM1IVPROC                          glUniform1iv;
PFNGLUNIFORM2FPROC                           glUniform2f;
PFNGLUNIFORM2FVPROC                          glUniform2fv;
PFNGLUNIFORM2IPROC                           glUniform2i;
PFNGLUNIFORM2IVPROC                          glUniform2iv;
PFNGLUNIFORM3FPROC                           glUniform3f;
PFNGLUNIFORM3FVPROC                          glUniform3fv;
PFNGLUNIFORM3IPROC                           glUniform3i;
PFNGLUNIFORM3IVPROC                          glUniform3iv;
PFNGLUNIFORM4FPROC                           glUniform4f;
PFNGLUNIFORM4FVPROC                          glUniform4fv;
PFNGLUNIFORM4IPROC                           glUniform4i;
PFNGLUNIFORM4IVPROC                          glUniform4iv;
PFNGLUNIFORMMATRIX2FVPROC                    glUniformMatrix2fv;
PFNGLUNIFORMMATRIX3FVPROC                    glUniformMatrix3fv;
PFNGLUNIFORMMATRIX4FVPROC                    glUniformMatrix4fv;
PFNGLUSEPROGRAMPROC                          glUseProgram;
PFNGLVALIDATEPROGRAMPROC                     glValidateProgram;
PFNGLVERTEXATTRIB1FPROC                      glVertexAttrib1f;
PFNGLVERTEXATTRIB1FVPROC                     glVertexAttrib1fv;
PFNGLVERTEXATTRIB2FPROC                      glVertexAttrib2f;
PFNGLVERTEXATTRIB2FVPROC                     glVertexAttrib2fv;
PFNGLVERTEXATTRIB3FPROC                      glVertexAttrib3f;
PFNGLVERTEXATTRIB3FVPROC                     glVertexAttrib3fv;
PFNGLVERTEXATTRIB4FPROC                      glVertexAttrib4f;
PFNGLVERTEXATTRIB4FVPROC                     glVertexAttrib4fv;
PFNGLVERTEXATTRIBPOINTERPROC                 glVertexAttribPointer;
PFNGLVIEWPORTPROC                            glViewport;

#if defined(GL_AMD_framebuffer_multisample_advanced)
PFNGLRENDERBUFFERSTORAGEMULTISAMPLEADVANCEDAMDPROC      glRenderbufferStorageMultisampleAdvancedAMD;
PFNGLNAMEDRENDERBUFFERSTORAGEMULTISAMPLEADVANCEDAMDPROC glNamedRenderbufferStorageMultisampleAdvancedAMD;
#endif /* defined(GL_AMD_framebuffer_multisample_advanced) */

#if defined(GL_AMD_performance_monitor)
PFNGLGETPERFMONITORGROUPSAMDPROC        glGetPerfMonitorGroupsAMD;
PFNGLGETPERFMONITORCOUNTERSAMDPROC      glGetPerfMonitorCountersAMD;
PFNGLGETPERFMONITORGROUPSTRINGAMDPROC   glGetPerfMonitorGroupStringAMD;
PFNGLGETPERFMONITORCOUNTERSTRINGAMDPROC glGetPerfMonitorCounterStringAMD;
PFNGLGETPERFMONITORCOUNTERINFOAMDPROC   glGetPerfMonitorCounterInfoAMD;
PFNGLGENPERFMONITORSAMDPROC             glGenPerfMonitorsAMD;
PFNGLDELETEPERFMONITORSAMDPROC          glDeletePerfMonitorsAMD;
PFNGLSELECTPERFMONITORCOUNTERSAMDPROC   glSelectPerfMonitorCountersAMD;
PFNGLBEGINPERFMONITORAMDPROC            glBeginPerfMonitorAMD;
PFNGLENDPERFMONITORAMDPROC              glEndPerfMonitorAMD;
PFNGLGETPERFMONITORCOUNTERDATAAMDPROC   glGetPerfMonitorCounterDataAMD;
#endif /* defined(GL_AMD_performance_monitor) */

#if defined(GL_ANGLE_framebuffer_blit)
PFNGLBLITFRAMEBUFFERANGLEPROC glBlitFramebufferANGLE;
#endif /* defined(GL_ANGLE_framebuffer_blit) */

#if defined(GL_ANGLE_framebuffer_multisample)
PFNGLRENDERBUFFERSTORAGEMULTISAMPLEANGLEPROC glRenderbufferStorageMultisampleANGLE;
#endif /* defined(GL_ANGLE_framebuffer_multisample) */

#if defined(GL_ANGLE_instanced_arrays)
PFNGLDRAWARRAYSINSTANCEDANGLEPROC   glDrawArraysInstancedANGLE;
PFNGLDRAWELEMENTSINSTANCEDANGLEPROC glDrawElementsInstancedANGLE;
PFNGLVERTEXATTRIBDIVISORANGLEPROC   glVertexAttribDivisorANGLE;
#endif /* defined(GL_ANGLE_instanced_arrays) */

#if defined(GL_ANGLE_translated_shader_source)
PFNGLGETTRANSLATEDSHADERSOURCEANGLEPROC glGetTranslatedShaderSourceANGLE;
#endif /* defined(GL_ANGLE_translated_shader_source) */

#if defined(GL_APPLE_copy_texture_levels)
PFNGLCOPYTEXTURELEVELSAPPLEPROC glCopyTextureLevelsAPPLE;
#endif /* defined(GL_APPLE_copy_texture_levels) */

#if defined(GL_APPLE_framebuffer_multisample)
PFNGLRENDERBUFFERSTORAGEMULTISAMPLEAPPLEPROC glRenderbufferStorageMultisampleAPPLE;
PFNGLRESOLVEMULTISAMPLEFRAMEBUFFERAPPLEPROC  glResolveMultisampleFramebufferAPPLE;
#endif /* defined(GL_APPLE_framebuffer_multisample) */

#if defined(GL_APPLE_sync)
PFNGLFENCESYNCAPPLEPROC      glFenceSyncAPPLE;
PFNGLISSYNCAPPLEPROC         glIsSyncAPPLE;
PFNGLDELETESYNCAPPLEPROC     glDeleteSyncAPPLE;
PFNGLCLIENTWAITSYNCAPPLEPROC glClientWaitSyncAPPLE;
PFNGLWAITSYNCAPPLEPROC       glWaitSyncAPPLE;
PFNGLGETINTEGER64VAPPLEPROC  glGetInteger64vAPPLE;
PFNGLGETSYNCIVAPPLEPROC      glGetSyncivAPPLE;
#endif /* defined(GL_APPLE_sync) */

#if defined(GL_EXT_EGL_image_storage)
PFNGLEGLIMAGETARGETTEXSTORAGEEXTPROC glEGLImageTargetTexStorageEXT;

PFNGLEGLIMAGETARGETTEXTURESTORAGEEXTPROC glEGLImageTargetTextureStorageEXT;
#endif /* defined(GL_EXT_EGL_image_storage) */

#if defined(GL_EXT_base_instance)
PFNGLDRAWARRAYSINSTANCEDBASEINSTANCEEXTPROC             glDrawArraysInstancedBaseInstanceEXT;
PFNGLDRAWELEMENTSINSTANCEDBASEINSTANCEEXTPROC           glDrawElementsInstancedBaseInstanceEXT;
PFNGLDRAWELEMENTSINSTANCEDBASEVERTEXBASEINSTANCEEXTPROC glDrawElementsInstancedBaseVertexBaseInstanceEXT;
#endif /* defined(GL_EXT_base_instance) */

#if defined(GL_EXT_blend_func_extended)
PFNGLBINDFRAGDATALOCATIONINDEXEDEXTPROC     glBindFragDataLocationIndexedEXT;
PFNGLBINDFRAGDATALOCATIONEXTPROC            glBindFragDataLocationEXT;
PFNGLGETPROGRAMRESOURCELOCATIONINDEXEXTPROC glGetProgramResourceLocationIndexEXT;
PFNGLGETFRAGDATAINDEXEXTPROC                glGetFragDataIndexEXT;
#endif /* defined(GL_EXT_blend_func_extended) */

#if defined(GL_EXT_buffer_storage)
PFNGLBUFFERSTORAGEEXTPROC glBufferStorageEXT;
#endif /* defined(GL_EXT_buffer_storage) */

#if defined(GL_EXT_clear_texture)
PFNGLCLEARTEXIMAGEEXTPROC    glClearTexImageEXT;
PFNGLCLEARTEXSUBIMAGEEXTPROC glClearTexSubImageEXT;
#endif /* defined(GL_EXT_clear_texture) */

#if defined(GL_EXT_clip_control)
PFNGLCLIPCONTROLEXTPROC glClipControlEXT;
#endif /* defined(GL_EXT_clip_control) */

#if defined(GL_EXT_copy_image)
PFNGLCOPYIMAGESUBDATAEXTPROC glCopyImageSubDataEXT;
#endif /* defined(GL_EXT_copy_image) */

#if defined(GL_EXT_debug_label)
PFNGLLABELOBJECTEXTPROC    glLabelObjectEXT;
PFNGLGETOBJECTLABELEXTPROC glGetObjectLabelEXT;
#endif /* defined(GL_EXT_debug_label) */

#if defined(GL_EXT_debug_marker)
PFNGLINSERTEVENTMARKEREXTPROC glInsertEventMarkerEXT;
PFNGLPUSHGROUPMARKEREXTPROC   glPushGroupMarkerEXT;
PFNGLPOPGROUPMARKEREXTPROC    glPopGroupMarkerEXT;
#endif /* defined(GL_EXT_debug_marker) */

#if defined(GL_EXT_discard_framebuffer)
PFNGLDISCARDFRAMEBUFFEREXTPROC glDiscardFramebufferEXT;
#endif /* defined(GL_EXT_discard_framebuffer) */

#if defined(GL_EXT_disjoint_timer_query)
PFNGLGENQUERIESEXTPROC          glGenQueriesEXT;
PFNGLDELETEQUERIESEXTPROC       glDeleteQueriesEXT;
PFNGLISQUERYEXTPROC             glIsQueryEXT;
PFNGLBEGINQUERYEXTPROC          glBeginQueryEXT;
PFNGLENDQUERYEXTPROC            glEndQueryEXT;
PFNGLQUERYCOUNTEREXTPROC        glQueryCounterEXT;
PFNGLGETQUERYIVEXTPROC          glGetQueryivEXT;
PFNGLGETQUERYOBJECTIVEXTPROC    glGetQueryObjectivEXT;
PFNGLGETQUERYOBJECTUIVEXTPROC   glGetQueryObjectuivEXT;
PFNGLGETQUERYOBJECTI64VEXTPROC  glGetQueryObjecti64vEXT;
PFNGLGETQUERYOBJECTUI64VEXTPROC glGetQueryObjectui64vEXT;
PFNGLGETINTEGER64VEXTPROC       glGetInteger64vEXT;
#endif /* defined(GL_EXT_disjoint_timer_query) */

#if defined(GL_EXT_draw_buffers)
PFNGLDRAWBUFFERSEXTPROC glDrawBuffersEXT;
#endif /* defined(GL_EXT_draw_buffers) */

#if defined(GL_EXT_draw_buffers_indexed)
PFNGLENABLEIEXTPROC                glEnableiEXT;
PFNGLDISABLEIEXTPROC               glDisableiEXT;
PFNGLBLENDEQUATIONIEXTPROC         glBlendEquationiEXT;
PFNGLBLENDEQUATIONSEPARATEIEXTPROC glBlendEquationSeparateiEXT;
PFNGLBLENDFUNCIEXTPROC             glBlendFunciEXT;
PFNGLBLENDFUNCSEPARATEIEXTPROC     glBlendFuncSeparateiEXT;
PFNGLCOLORMASKIEXTPROC             glColorMaskiEXT;
PFNGLISENABLEDIEXTPROC             glIsEnablediEXT;
#endif /* defined(GL_EXT_draw_buffers_indexed) */

#if defined(GL_EXT_draw_elements_base_vertex)
PFNGLDRAWELEMENTSBASEVERTEXEXTPROC          glDrawElementsBaseVertexEXT;
PFNGLDRAWRANGEELEMENTSBASEVERTEXEXTPROC     glDrawRangeElementsBaseVertexEXT;
PFNGLDRAWELEMENTSINSTANCEDBASEVERTEXEXTPROC glDrawElementsInstancedBaseVertexEXT;
PFNGLMULTIDRAWELEMENTSBASEVERTEXEXTPROC     glMultiDrawElementsBaseVertexEXT;
#endif /* defined(GL_EXT_draw_elements_base_vertex) */

#if defined(GL_EXT_draw_instanced)
PFNGLDRAWARRAYSINSTANCEDEXTPROC   glDrawArraysInstancedEXT;
PFNGLDRAWELEMENTSINSTANCEDEXTPROC glDrawElementsInstancedEXT;
#endif /* defined(GL_EXT_draw_instanced) */

#if defined(GL_EXT_draw_transform_feedback)
PFNGLDRAWTRANSFORMFEEDBACKEXTPROC          glDrawTransformFeedbackEXT;
PFNGLDRAWTRANSFORMFEEDBACKINSTANCEDEXTPROC glDrawTransformFeedbackInstancedEXT;
#endif /* defined(GL_EXT_draw_transform_feedback) */

#if defined(GL_EXT_external_buffer)
PFNGLBUFFERSTORAGEEXTERNALEXTPROC      glBufferStorageExternalEXT;
PFNGLNAMEDBUFFERSTORAGEEXTERNALEXTPROC glNamedBufferStorageExternalEXT;
#endif /* defined(GL_EXT_external_buffer) */

#if defined(GL_EXT_geometry_shader)
PFNGLFRAMEBUFFERTEXTUREEXTPROC glFramebufferTextureEXT;
#endif /* defined(GL_EXT_geometry_shader) */

#if defined(GL_EXT_instanced_arrays)
PFNGLVERTEXATTRIBDIVISOREXTPROC glVertexAttribDivisorEXT;
#endif /* defined(GL_EXT_instanced_arrays) */

#if defined(GL_EXT_map_buffer_range)
PFNGLMAPBUFFERRANGEEXTPROC         glMapBufferRangeEXT;
PFNGLFLUSHMAPPEDBUFFERRANGEEXTPROC glFlushMappedBufferRangeEXT;
#endif /* defined(GL_EXT_map_buffer_range) */

#if defined(GL_EXT_memory_object)
PFNGLGETUNSIGNEDBYTEVEXTPROC           glGetUnsignedBytevEXT;
PFNGLGETUNSIGNEDBYTEI_VEXTPROC         glGetUnsignedBytei_vEXT;
PFNGLDELETEMEMORYOBJECTSEXTPROC        glDeleteMemoryObjectsEXT;
PFNGLISMEMORYOBJECTEXTPROC             glIsMemoryObjectEXT;
PFNGLCREATEMEMORYOBJECTSEXTPROC        glCreateMemoryObjectsEXT;
PFNGLMEMORYOBJECTPARAMETERIVEXTPROC    glMemoryObjectParameterivEXT;
PFNGLGETMEMORYOBJECTPARAMETERIVEXTPROC glGetMemoryObjectParameterivEXT;
PFNGLTEXSTORAGEMEM2DEXTPROC            glTexStorageMem2DEXT;
PFNGLTEXSTORAGEMEM2DMULTISAMPLEEXTPROC glTexStorageMem2DMultisampleEXT;
PFNGLTEXSTORAGEMEM3DEXTPROC            glTexStorageMem3DEXT;
PFNGLTEXSTORAGEMEM3DMULTISAMPLEEXTPROC glTexStorageMem3DMultisampleEXT;
PFNGLBUFFERSTORAGEMEMEXTPROC           glBufferStorageMemEXT;

PFNGLTEXTURESTORAGEMEM2DEXTPROC            glTextureStorageMem2DEXT;
PFNGLTEXTURESTORAGEMEM2DMULTISAMPLEEXTPROC glTextureStorageMem2DMultisampleEXT;
PFNGLTEXTURESTORAGEMEM3DEXTPROC            glTextureStorageMem3DEXT;
PFNGLTEXTURESTORAGEMEM3DMULTISAMPLEEXTPROC glTextureStorageMem3DMultisampleEXT;
PFNGLNAMEDBUFFERSTORAGEMEMEXTPROC          glNamedBufferStorageMemEXT;
#endif /* defined(GL_EXT_memory_object) */

#if defined(GL_EXT_memory_object_fd)
PFNGLIMPORTMEMORYFDEXTPROC glImportMemoryFdEXT;
#endif /* defined(GL_EXT_memory_object_fd) */

#if defined(GL_EXT_memory_object_win32)
PFNGLIMPORTMEMORYWIN32HANDLEEXTPROC glImportMemoryWin32HandleEXT;
PFNGLIMPORTMEMORYWIN32NAMEEXTPROC   glImportMemoryWin32NameEXT;
#endif /* defined(GL_EXT_memory_object_win32) */

#if defined(GL_EXT_multi_draw_arrays)
PFNGLMULTIDRAWARRAYSEXTPROC   glMultiDrawArraysEXT;
PFNGLMULTIDRAWELEMENTSEXTPROC glMultiDrawElementsEXT;
#endif /* defined(GL_EXT_multi_draw_arrays) */

#if defined(GL_EXT_multi_draw_indirect)
PFNGLMULTIDRAWARRAYSINDIRECTEXTPROC   glMultiDrawArraysIndirectEXT;
PFNGLMULTIDRAWELEMENTSINDIRECTEXTPROC glMultiDrawElementsIndirectEXT;
#endif /* defined(GL_EXT_multi_draw_indirect) */

#if defined(GL_EXT_multisampled_render_to_texture)
PFNGLRENDERBUFFERSTORAGEMULTISAMPLEEXTPROC  glRenderbufferStorageMultisampleEXT;
PFNGLFRAMEBUFFERTEXTURE2DMULTISAMPLEEXTPROC glFramebufferTexture2DMultisampleEXT;
#endif /* defined(GL_EXT_multisampled_render_to_texture) */

#if defined(GL_EXT_multiview_draw_buffers)
PFNGLREADBUFFERINDEXEDEXTPROC  glReadBufferIndexedEXT;
PFNGLDRAWBUFFERSINDEXEDEXTPROC glDrawBuffersIndexedEXT;
PFNGLGETINTEGERI_VEXTPROC      glGetIntegeri_vEXT;
#endif /* defined(GL_EXT_multiview_draw_buffers) */

#if defined(GL_EXT_polygon_offset_clamp)
PFNGLPOLYGONOFFSETCLAMPEXTPROC glPolygonOffsetClampEXT;
#endif /* defined(GL_EXT_polygon_offset_clamp) */

#if defined(GL_EXT_primitive_bounding_box)
PFNGLPRIMITIVEBOUNDINGBOXEXTPROC glPrimitiveBoundingBoxEXT;
#endif /* defined(GL_EXT_primitive_bounding_box) */

#if defined(GL_EXT_raster_multisample)
PFNGLRASTERSAMPLESEXTPROC glRasterSamplesEXT;
#endif /* defined(GL_EXT_raster_multisample) */

#if defined(GL_EXT_robustness)
PFNGLGETGRAPHICSRESETSTATUSEXTPROC glGetGraphicsResetStatusEXT;
PFNGLREADNPIXELSEXTPROC            glReadnPixelsEXT;
PFNGLGETNUNIFORMFVEXTPROC          glGetnUniformfvEXT;
PFNGLGETNUNIFORMIVEXTPROC          glGetnUniformivEXT;
#endif /* defined(GL_EXT_robustness) */

#if defined(GL_EXT_semaphore)
PFNGLGENSEMAPHORESEXTPROC              glGenSemaphoresEXT;
PFNGLDELETESEMAPHORESEXTPROC           glDeleteSemaphoresEXT;
PFNGLISSEMAPHOREEXTPROC                glIsSemaphoreEXT;
PFNGLSEMAPHOREPARAMETERUI64VEXTPROC    glSemaphoreParameterui64vEXT;
PFNGLGETSEMAPHOREPARAMETERUI64VEXTPROC glGetSemaphoreParameterui64vEXT;
PFNGLWAITSEMAPHOREEXTPROC              glWaitSemaphoreEXT;
PFNGLSIGNALSEMAPHOREEXTPROC            glSignalSemaphoreEXT;
#endif /* defined(GL_EXT_semaphore) */

#if defined(GL_EXT_semaphore_fd)
PFNGLIMPORTSEMAPHOREFDEXTPROC glImportSemaphoreFdEXT;
#endif /* defined(GL_EXT_semaphore_fd) */

#if defined(GL_EXT_semaphore_win32)
PFNGLIMPORTSEMAPHOREWIN32HANDLEEXTPROC glImportSemaphoreWin32HandleEXT;
PFNGLIMPORTSEMAPHOREWIN32NAMEEXTPROC   glImportSemaphoreWin32NameEXT;
#endif /* defined(GL_EXT_semaphore_win32) */

#if defined(GL_EXT_separate_shader_objects)
PFNGLACTIVESHADERPROGRAMEXTPROC       glActiveShaderProgramEXT;
PFNGLBINDPROGRAMPIPELINEEXTPROC       glBindProgramPipelineEXT;
PFNGLCREATESHADERPROGRAMVEXTPROC      glCreateShaderProgramvEXT;
PFNGLDELETEPROGRAMPIPELINESEXTPROC    glDeleteProgramPipelinesEXT;
PFNGLGENPROGRAMPIPELINESEXTPROC       glGenProgramPipelinesEXT;
PFNGLGETPROGRAMPIPELINEINFOLOGEXTPROC glGetProgramPipelineInfoLogEXT;
PFNGLGETPROGRAMPIPELINEIVEXTPROC      glGetProgramPipelineivEXT;
PFNGLISPROGRAMPIPELINEEXTPROC         glIsProgramPipelineEXT;
PFNGLPROGRAMPARAMETERIEXTPROC         glProgramParameteriEXT;
PFNGLPROGRAMUNIFORM1FEXTPROC          glProgramUniform1fEXT;
PFNGLPROGRAMUNIFORM1FVEXTPROC         glProgramUniform1fvEXT;
PFNGLPROGRAMUNIFORM1IEXTPROC          glProgramUniform1iEXT;
PFNGLPROGRAMUNIFORM1IVEXTPROC         glProgramUniform1ivEXT;
PFNGLPROGRAMUNIFORM2FEXTPROC          glProgramUniform2fEXT;
PFNGLPROGRAMUNIFORM2FVEXTPROC         glProgramUniform2fvEXT;
PFNGLPROGRAMUNIFORM2IEXTPROC          glProgramUniform2iEXT;
PFNGLPROGRAMUNIFORM2IVEXTPROC         glProgramUniform2ivEXT;
PFNGLPROGRAMUNIFORM3FEXTPROC          glProgramUniform3fEXT;
PFNGLPROGRAMUNIFORM3FVEXTPROC         glProgramUniform3fvEXT;
PFNGLPROGRAMUNIFORM3IEXTPROC          glProgramUniform3iEXT;
PFNGLPROGRAMUNIFORM3IVEXTPROC         glProgramUniform3ivEXT;
PFNGLPROGRAMUNIFORM4FEXTPROC          glProgramUniform4fEXT;
PFNGLPROGRAMUNIFORM4FVEXTPROC         glProgramUniform4fvEXT;
PFNGLPROGRAMUNIFORM4IEXTPROC          glProgramUniform4iEXT;
PFNGLPROGRAMUNIFORM4IVEXTPROC         glProgramUniform4ivEXT;
PFNGLPROGRAMUNIFORMMATRIX2FVEXTPROC   glProgramUniformMatrix2fvEXT;
PFNGLPROGRAMUNIFORMMATRIX3FVEXTPROC   glProgramUniformMatrix3fvEXT;
PFNGLPROGRAMUNIFORMMATRIX4FVEXTPROC   glProgramUniformMatrix4fvEXT;
PFNGLUSEPROGRAMSTAGESEXTPROC          glUseProgramStagesEXT;
PFNGLVALIDATEPROGRAMPIPELINEEXTPROC   glValidateProgramPipelineEXT;

PFNGLPROGRAMUNIFORM1UIEXTPROC         glProgramUniform1uiEXT;
PFNGLPROGRAMUNIFORM2UIEXTPROC         glProgramUniform2uiEXT;
PFNGLPROGRAMUNIFORM3UIEXTPROC         glProgramUniform3uiEXT;
PFNGLPROGRAMUNIFORM4UIEXTPROC         glProgramUniform4uiEXT;
PFNGLPROGRAMUNIFORM1UIVEXTPROC        glProgramUniform1uivEXT;
PFNGLPROGRAMUNIFORM2UIVEXTPROC        glProgramUniform2uivEXT;
PFNGLPROGRAMUNIFORM3UIVEXTPROC        glProgramUniform3uivEXT;
PFNGLPROGRAMUNIFORM4UIVEXTPROC        glProgramUniform4uivEXT;
PFNGLPROGRAMUNIFORMMATRIX2X3FVEXTPROC glProgramUniformMatrix2x3fvEXT;
PFNGLPROGRAMUNIFORMMATRIX3X2FVEXTPROC glProgramUniformMatrix3x2fvEXT;
PFNGLPROGRAMUNIFORMMATRIX2X4FVEXTPROC glProgramUniformMatrix2x4fvEXT;
PFNGLPROGRAMUNIFORMMATRIX4X2FVEXTPROC glProgramUniformMatrix4x2fvEXT;
PFNGLPROGRAMUNIFORMMATRIX3X4FVEXTPROC glProgramUniformMatrix3x4fvEXT;
PFNGLPROGRAMUNIFORMMATRIX4X3FVEXTPROC glProgramUniformMatrix4x3fvEXT;
#endif /* defined(GL_EXT_separate_shader_objects) */

#if defined(GL_EXT_shader_framebuffer_fetch_non_coherent)
PFNGLFRAMEBUFFERFETCHBARRIEREXTPROC glFramebufferFetchBarrierEXT;
#endif /* defined(GL_EXT_shader_framebuffer_fetch_non_coherent) */

#if defined(GL_EXT_shader_pixel_local_storage2)
PFNGLFRAMEBUFFERPIXELLOCALSTORAGESIZEEXTPROC    glFramebufferPixelLocalStorageSizeEXT;
PFNGLGETFRAMEBUFFERPIXELLOCALSTORAGESIZEEXTPROC glGetFramebufferPixelLocalStorageSizeEXT;
PFNGLCLEARPIXELLOCALSTORAGEUIEXTPROC            glClearPixelLocalStorageuiEXT;
#endif /* defined(GL_EXT_shader_pixel_local_storage2) */

#if defined(GL_EXT_sparse_texture)
PFNGLTEXPAGECOMMITMENTEXTPROC glTexPageCommitmentEXT;
#endif /* defined(GL_EXT_sparse_texture) */

#if defined(GL_EXT_tessellation_shader)
PFNGLPATCHPARAMETERIEXTPROC glPatchParameteriEXT;
#endif /* defined(GL_EXT_tessellation_shader) */

#if defined(GL_EXT_texture_border_clamp)
PFNGLTEXPARAMETERIIVEXTPROC         glTexParameterIivEXT;
PFNGLTEXPARAMETERIUIVEXTPROC        glTexParameterIuivEXT;
PFNGLGETTEXPARAMETERIIVEXTPROC      glGetTexParameterIivEXT;
PFNGLGETTEXPARAMETERIUIVEXTPROC     glGetTexParameterIuivEXT;
PFNGLSAMPLERPARAMETERIIVEXTPROC     glSamplerParameterIivEXT;
PFNGLSAMPLERPARAMETERIUIVEXTPROC    glSamplerParameterIuivEXT;
PFNGLGETSAMPLERPARAMETERIIVEXTPROC  glGetSamplerParameterIivEXT;
PFNGLGETSAMPLERPARAMETERIUIVEXTPROC glGetSamplerParameterIuivEXT;
#endif /* defined(GL_EXT_texture_border_clamp) */

#if defined(GL_EXT_texture_buffer)
PFNGLTEXBUFFEREXTPROC      glTexBufferEXT;
PFNGLTEXBUFFERRANGEEXTPROC glTexBufferRangeEXT;
#endif /* defined(GL_EXT_texture_buffer) */

#if defined(GL_EXT_texture_storage)
PFNGLTEXSTORAGE1DEXTPROC glTexStorage1DEXT;
PFNGLTEXSTORAGE2DEXTPROC glTexStorage2DEXT;
PFNGLTEXSTORAGE3DEXTPROC glTexStorage3DEXT;

PFNGLTEXTURESTORAGE1DEXTPROC glTextureStorage1DEXT;
PFNGLTEXTURESTORAGE2DEXTPROC glTextureStorage2DEXT;
PFNGLTEXTURESTORAGE3DEXTPROC glTextureStorage3DEXT;
#endif /* defined(GL_EXT_texture_storage) */

#if defined(GL_EXT_texture_view)
PFNGLTEXTUREVIEWEXTPROC glTextureViewEXT;
#endif /* defined(GL_EXT_texture_view) */

#if defined(GL_NV_timeline_semaphore)
PFNGLCREATESEMAPHORESNVPROC        glCreateSemaphoresNV;
PFNGLSEMAPHOREPARAMETERIVNVPROC    glSemaphoreParameterivNV;
PFNGLGETSEMAPHOREPARAMETERIVNVPROC glGetSemaphoreParameterivNV;
#endif /* defined(GL_NV_timeline_semaphore) */

#if defined(GL_EXT_win32_keyed_mutex)
PFNGLACQUIREKEYEDMUTEXWIN32EXTPROC glAcquireKeyedMutexWin32EXT;
PFNGLRELEASEKEYEDMUTEXWIN32EXTPROC glReleaseKeyedMutexWin32EXT;
#endif /* defined(GL_EXT_win32_keyed_mutex) */

#if defined(GL_EXT_window_rectangles)
PFNGLWINDOWRECTANGLESEXTPROC glWindowRectanglesEXT;
#endif /* defined(GL_EXT_window_rectangles) */

#if defined(GL_IMG_bindless_texture)
PFNGLGETTEXTUREHANDLEIMGPROC          glGetTextureHandleIMG;
PFNGLGETTEXTURESAMPLERHANDLEIMGPROC   glGetTextureSamplerHandleIMG;
PFNGLUNIFORMHANDLEUI64IMGPROC         glUniformHandleui64IMG;
PFNGLUNIFORMHANDLEUI64VIMGPROC        glUniformHandleui64vIMG;
PFNGLPROGRAMUNIFORMHANDLEUI64IMGPROC  glProgramUniformHandleui64IMG;
PFNGLPROGRAMUNIFORMHANDLEUI64VIMGPROC glProgramUniformHandleui64vIMG;
#endif /* defined(GL_IMG_bindless_texture) */

#if defined(GL_IMG_framebuffer_downsample)
PFNGLFRAMEBUFFERTEXTURE2DDOWNSAMPLEIMGPROC    glFramebufferTexture2DDownsampleIMG;
PFNGLFRAMEBUFFERTEXTURELAYERDOWNSAMPLEIMGPROC glFramebufferTextureLayerDownsampleIMG;
#endif /* defined(GL_IMG_framebuffer_downsample) */

#if defined(GL_IMG_multisampled_render_to_texture)
PFNGLRENDERBUFFERSTORAGEMULTISAMPLEIMGPROC  glRenderbufferStorageMultisampleIMG;
PFNGLFRAMEBUFFERTEXTURE2DMULTISAMPLEIMGPROC glFramebufferTexture2DMultisampleIMG;
#endif /* defined(GL_IMG_multisampled_render_to_texture) */

#if defined(GL_INTEL_framebuffer_CMAA)
PFNGLAPPLYFRAMEBUFFERATTACHMENTCMAAINTELPROC glApplyFramebufferAttachmentCMAAINTEL;
#endif /* defined(GL_INTEL_framebuffer_CMAA) */

#if defined(GL_INTEL_performance_query)
PFNGLBEGINPERFQUERYINTELPROC       glBeginPerfQueryINTEL;
PFNGLCREATEPERFQUERYINTELPROC      glCreatePerfQueryINTEL;
PFNGLDELETEPERFQUERYINTELPROC      glDeletePerfQueryINTEL;
PFNGLENDPERFQUERYINTELPROC         glEndPerfQueryINTEL;
PFNGLGETFIRSTPERFQUERYIDINTELPROC  glGetFirstPerfQueryIdINTEL;
PFNGLGETNEXTPERFQUERYIDINTELPROC   glGetNextPerfQueryIdINTEL;
PFNGLGETPERFCOUNTERINFOINTELPROC   glGetPerfCounterInfoINTEL;
PFNGLGETPERFQUERYDATAINTELPROC     glGetPerfQueryDataINTEL;
PFNGLGETPERFQUERYIDBYNAMEINTELPROC glGetPerfQueryIdByNameINTEL;
PFNGLGETPERFQUERYINFOINTELPROC     glGetPerfQueryInfoINTEL;
#endif /* defined(GL_INTEL_performance_query) */

#if defined(GL_KHR_blend_equation_advanced)
PFNGLBLENDBARRIERKHRPROC glBlendBarrierKHR;
#endif /* defined(GL_KHR_blend_equation_advanced) */

#if defined(GL_KHR_debug)
PFNGLDEBUGMESSAGECONTROLKHRPROC  glDebugMessageControlKHR;
PFNGLDEBUGMESSAGEINSERTKHRPROC   glDebugMessageInsertKHR;
PFNGLDEBUGMESSAGECALLBACKKHRPROC glDebugMessageCallbackKHR;
PFNGLGETDEBUGMESSAGELOGKHRPROC   glGetDebugMessageLogKHR;
PFNGLPUSHDEBUGGROUPKHRPROC       glPushDebugGroupKHR;
PFNGLPOPDEBUGGROUPKHRPROC        glPopDebugGroupKHR;
PFNGLOBJECTLABELKHRPROC          glObjectLabelKHR;
PFNGLGETOBJECTLABELKHRPROC       glGetObjectLabelKHR;
PFNGLOBJECTPTRLABELKHRPROC       glObjectPtrLabelKHR;
PFNGLGETOBJECTPTRLABELKHRPROC    glGetObjectPtrLabelKHR;
PFNGLGETPOINTERVKHRPROC          glGetPointervKHR;
#endif /* defined(GL_KHR_debug) */

#if defined(GL_KHR_robustness)
PFNGLGETGRAPHICSRESETSTATUSKHRPROC glGetGraphicsResetStatusKHR;
PFNGLREADNPIXELSKHRPROC            glReadnPixelsKHR;
PFNGLGETNUNIFORMFVKHRPROC          glGetnUniformfvKHR;
PFNGLGETNUNIFORMIVKHRPROC          glGetnUniformivKHR;
PFNGLGETNUNIFORMUIVKHRPROC         glGetnUniformuivKHR;
#endif /* defined(GL_KHR_robustness) */

#if defined(GL_KHR_parallel_shader_compile)
PFNGLMAXSHADERCOMPILERTHREADSKHRPROC glMaxShaderCompilerThreadsKHR;
#endif /* defined(GL_KHR_parallel_shader_compile) */

#if defined(GL_MESA_framebuffer_flip_y)
PFNGLFRAMEBUFFERPARAMETERIMESAPROC     glFramebufferParameteriMESA;
PFNGLGETFRAMEBUFFERPARAMETERIVMESAPROC glGetFramebufferParameterivMESA;
#endif /* defined(GL_MESA_framebuffer_flip_y) */

#if defined(GL_NV_bindless_texture)
PFNGLGETTEXTUREHANDLENVPROC             glGetTextureHandleNV;
PFNGLGETTEXTURESAMPLERHANDLENVPROC      glGetTextureSamplerHandleNV;
PFNGLMAKETEXTUREHANDLERESIDENTNVPROC    glMakeTextureHandleResidentNV;
PFNGLMAKETEXTUREHANDLENONRESIDENTNVPROC glMakeTextureHandleNonResidentNV;
PFNGLGETIMAGEHANDLENVPROC               glGetImageHandleNV;
PFNGLMAKEIMAGEHANDLERESIDENTNVPROC      glMakeImageHandleResidentNV;
PFNGLMAKEIMAGEHANDLENONRESIDENTNVPROC   glMakeImageHandleNonResidentNV;
PFNGLUNIFORMHANDLEUI64NVPROC            glUniformHandleui64NV;
PFNGLUNIFORMHANDLEUI64VNVPROC           glUniformHandleui64vNV;
PFNGLPROGRAMUNIFORMHANDLEUI64NVPROC     glProgramUniformHandleui64NV;
PFNGLPROGRAMUNIFORMHANDLEUI64VNVPROC    glProgramUniformHandleui64vNV;
PFNGLISTEXTUREHANDLERESIDENTNVPROC      glIsTextureHandleResidentNV;
PFNGLISIMAGEHANDLERESIDENTNVPROC        glIsImageHandleResidentNV;
#endif /* defined(GL_NV_bindless_texture) */

#if defined(GL_NV_blend_equation_advanced)
PFNGLBLENDPARAMETERINVPROC glBlendParameteriNV;
PFNGLBLENDBARRIERNVPROC    glBlendBarrierNV;
#endif /* defined(GL_NV_blend_equation_advanced) */

#if defined(GL_NV_clip_space_w_scaling)
PFNGLVIEWPORTPOSITIONWSCALENVPROC glViewportPositionWScaleNV;
#endif /* defined(GL_NV_clip_space_w_scaling) */

#if defined(GL_NV_conditional_render)
PFNGLBEGINCONDITIONALRENDERNVPROC glBeginConditionalRenderNV;
PFNGLENDCONDITIONALRENDERNVPROC   glEndConditionalRenderNV;
#endif /* defined(GL_NV_conditional_render) */

#if defined(GL_NV_conservative_raster)
PFNGLSUBPIXELPRECISIONBIASNVPROC glSubpixelPrecisionBiasNV;
#endif /* defined(GL_NV_conservative_raster) */

#if defined(GL_NV_conservative_raster_pre_snap_triangles)
PFNGLCONSERVATIVERASTERPARAMETERINVPROC glConservativeRasterParameteriNV;
#endif /* defined(GL_NV_conservative_raster_pre_snap_triangles) */

#if defined(GL_NV_copy_buffer)
PFNGLCOPYBUFFERSUBDATANVPROC glCopyBufferSubDataNV;
#endif /* defined(GL_NV_copy_buffer) */

#if defined(GL_NV_coverage_sample)
PFNGLCOVERAGEMASKNVPROC      glCoverageMaskNV;
PFNGLCOVERAGEOPERATIONNVPROC glCoverageOperationNV;
#endif /* defined(GL_NV_coverage_sample) */

#if defined(GL_NV_draw_buffers)
PFNGLDRAWBUFFERSNVPROC glDrawBuffersNV;
#endif /* defined(GL_NV_draw_buffers) */

#if defined(GL_NV_draw_instanced)
PFNGLDRAWARRAYSINSTANCEDNVPROC   glDrawArraysInstancedNV;
PFNGLDRAWELEMENTSINSTANCEDNVPROC glDrawElementsInstancedNV;
#endif /* defined(GL_NV_draw_instanced) */

#if defined(GL_NV_draw_vulkan_image)
PFNGLDRAWVKIMAGENVPROC       glDrawVkImageNV;
PFNGLGETVKPROCADDRNVPROC     glGetVkProcAddrNV;
PFNGLWAITVKSEMAPHORENVPROC   glWaitVkSemaphoreNV;
PFNGLSIGNALVKSEMAPHORENVPROC glSignalVkSemaphoreNV;
PFNGLSIGNALVKFENCENVPROC     glSignalVkFenceNV;
#endif /* defined(GL_NV_draw_vulkan_image) */

#if defined(GL_NV_fence)
PFNGLDELETEFENCESNVPROC glDeleteFencesNV;
PFNGLGENFENCESNVPROC    glGenFencesNV;
PFNGLISFENCENVPROC      glIsFenceNV;
PFNGLTESTFENCENVPROC    glTestFenceNV;
PFNGLGETFENCEIVNVPROC   glGetFenceivNV;
PFNGLFINISHFENCENVPROC  glFinishFenceNV;
PFNGLSETFENCENVPROC     glSetFenceNV;
#endif /* defined(GL_NV_fence) */

#if defined(GL_NV_fragment_coverage_to_color)
PFNGLFRAGMENTCOVERAGECOLORNVPROC glFragmentCoverageColorNV;
#endif /* defined(GL_NV_fragment_coverage_to_color) */

#if defined(GL_NV_framebuffer_blit)
PFNGLBLITFRAMEBUFFERNVPROC glBlitFramebufferNV;
#endif /* defined(GL_NV_framebuffer_blit) */

#if defined(GL_NV_framebuffer_mixed_samples)
PFNGLCOVERAGEMODULATIONTABLENVPROC    glCoverageModulationTableNV;
PFNGLGETCOVERAGEMODULATIONTABLENVPROC glGetCoverageModulationTableNV;
PFNGLCOVERAGEMODULATIONNVPROC         glCoverageModulationNV;
#endif /* defined(GL_NV_framebuffer_mixed_samples) */

#if defined(GL_NV_framebuffer_multisample)
PFNGLRENDERBUFFERSTORAGEMULTISAMPLENVPROC glRenderbufferStorageMultisampleNV;
#endif /* defined(GL_NV_framebuffer_multisample) */

#if defined(GL_NV_gpu_shader5)
PFNGLUNIFORM1I64NVPROC    glUniform1i64NV;
PFNGLUNIFORM2I64NVPROC    glUniform2i64NV;
PFNGLUNIFORM3I64NVPROC    glUniform3i64NV;
PFNGLUNIFORM4I64NVPROC    glUniform4i64NV;
PFNGLUNIFORM1I64VNVPROC   glUniform1i64vNV;
PFNGLUNIFORM2I64VNVPROC   glUniform2i64vNV;
PFNGLUNIFORM3I64VNVPROC   glUniform3i64vNV;
PFNGLUNIFORM4I64VNVPROC   glUniform4i64vNV;
PFNGLUNIFORM1UI64NVPROC   glUniform1ui64NV;
PFNGLUNIFORM2UI64NVPROC   glUniform2ui64NV;
PFNGLUNIFORM3UI64NVPROC   glUniform3ui64NV;
PFNGLUNIFORM4UI64NVPROC   glUniform4ui64NV;
PFNGLUNIFORM1UI64VNVPROC  glUniform1ui64vNV;
PFNGLUNIFORM2UI64VNVPROC  glUniform2ui64vNV;
PFNGLUNIFORM3UI64VNVPROC  glUniform3ui64vNV;
PFNGLUNIFORM4UI64VNVPROC  glUniform4ui64vNV;
PFNGLGETUNIFORMI64VNVPROC glGetUniformi64vNV;

PFNGLPROGRAMUNIFORM1I64NVPROC   glProgramUniform1i64NV;
PFNGLPROGRAMUNIFORM2I64NVPROC   glProgramUniform2i64NV;
PFNGLPROGRAMUNIFORM3I64NVPROC   glProgramUniform3i64NV;
PFNGLPROGRAMUNIFORM4I64NVPROC   glProgramUniform4i64NV;
PFNGLPROGRAMUNIFORM1I64VNVPROC  glProgramUniform1i64vNV;
PFNGLPROGRAMUNIFORM2I64VNVPROC  glProgramUniform2i64vNV;
PFNGLPROGRAMUNIFORM3I64VNVPROC  glProgramUniform3i64vNV;
PFNGLPROGRAMUNIFORM4I64VNVPROC  glProgramUniform4i64vNV;
PFNGLPROGRAMUNIFORM1UI64NVPROC  glProgramUniform1ui64NV;
PFNGLPROGRAMUNIFORM2UI64NVPROC  glProgramUniform2ui64NV;
PFNGLPROGRAMUNIFORM3UI64NVPROC  glProgramUniform3ui64NV;
PFNGLPROGRAMUNIFORM4UI64NVPROC  glProgramUniform4ui64NV;
PFNGLPROGRAMUNIFORM1UI64VNVPROC glProgramUniform1ui64vNV;
PFNGLPROGRAMUNIFORM2UI64VNVPROC glProgramUniform2ui64vNV;
PFNGLPROGRAMUNIFORM3UI64VNVPROC glProgramUniform3ui64vNV;
PFNGLPROGRAMUNIFORM4UI64VNVPROC glProgramUniform4ui64vNV;
#endif /* defined(GL_NV_gpu_shader5) */

#if defined(GL_NV_instanced_arrays)
PFNGLVERTEXATTRIBDIVISORNVPROC glVertexAttribDivisorNV;
#endif /* defined(GL_NV_instanced_arrays) */

#if defined(GL_NV_internalformat_sample_query)
PFNGLGETINTERNALFORMATSAMPLEIVNVPROC glGetInternalformatSampleivNV;
#endif /* defined(GL_NV_internalformat_sample_query) */

#if defined(GL_NV_memory_attachment)
PFNGLGETMEMORYOBJECTDETACHEDRESOURCESUIVNVPROC glGetMemoryObjectDetachedResourcesuivNV;
PFNGLRESETMEMORYOBJECTPARAMETERNVPROC          glResetMemoryObjectParameterNV;
PFNGLTEXATTACHMEMORYNVPROC                     glTexAttachMemoryNV;
PFNGLBUFFERATTACHMEMORYNVPROC                  glBufferAttachMemoryNV;

PFNGLTEXTUREATTACHMEMORYNVPROC     glTextureAttachMemoryNV;
PFNGLNAMEDBUFFERATTACHMEMORYNVPROC glNamedBufferAttachMemoryNV;
#endif /* defined(GL_NV_memory_attachment) */

#if defined(GL_NV_memory_object_sparse)
PFNGLBUFFERPAGECOMMITMENTMEMNVPROC glBufferPageCommitmentMemNV;
PFNGLTEXPAGECOMMITMENTMEMNVPROC    glTexPageCommitmentMemNV;

PFNGLNAMEDBUFFERPAGECOMMITMENTMEMNVPROC glNamedBufferPageCommitmentMemNV;
PFNGLTEXTUREPAGECOMMITMENTMEMNVPROC     glTexturePageCommitmentMemNV;
#endif /* defined(GL_NV_memory_object_sparse) */

#if defined(GL_NV_mesh_shader)
PFNGLDRAWMESHTASKSNVPROC                   glDrawMeshTasksNV;
PFNGLDRAWMESHTASKSINDIRECTNVPROC           glDrawMeshTasksIndirectNV;
PFNGLMULTIDRAWMESHTASKSINDIRECTNVPROC      glMultiDrawMeshTasksIndirectNV;
PFNGLMULTIDRAWMESHTASKSINDIRECTCOUNTNVPROC glMultiDrawMeshTasksIndirectCountNV;
#endif /* defined(GL_NV_mesh_shader) */

#if defined(GL_NV_non_square_matrices)
PFNGLUNIFORMMATRIX2X3FVNVPROC glUniformMatrix2x3fvNV;
PFNGLUNIFORMMATRIX3X2FVNVPROC glUniformMatrix3x2fvNV;
PFNGLUNIFORMMATRIX2X4FVNVPROC glUniformMatrix2x4fvNV;
PFNGLUNIFORMMATRIX4X2FVNVPROC glUniformMatrix4x2fvNV;
PFNGLUNIFORMMATRIX3X4FVNVPROC glUniformMatrix3x4fvNV;
PFNGLUNIFORMMATRIX4X3FVNVPROC glUniformMatrix4x3fvNV;
#endif /* defined(GL_NV_non_square_matrices) */

#if defined(GL_NV_path_rendering)
PFNGLGENPATHSNVPROC                   glGenPathsNV;
PFNGLDELETEPATHSNVPROC                glDeletePathsNV;
PFNGLISPATHNVPROC                     glIsPathNV;
PFNGLPATHCOMMANDSNVPROC               glPathCommandsNV;
PFNGLPATHCOORDSNVPROC                 glPathCoordsNV;
PFNGLPATHSUBCOMMANDSNVPROC            glPathSubCommandsNV;
PFNGLPATHSUBCOORDSNVPROC              glPathSubCoordsNV;
PFNGLPATHSTRINGNVPROC                 glPathStringNV;
PFNGLPATHGLYPHSNVPROC                 glPathGlyphsNV;
PFNGLPATHGLYPHRANGENVPROC             glPathGlyphRangeNV;
PFNGLWEIGHTPATHSNVPROC                glWeightPathsNV;
PFNGLCOPYPATHNVPROC                   glCopyPathNV;
PFNGLINTERPOLATEPATHSNVPROC           glInterpolatePathsNV;
PFNGLTRANSFORMPATHNVPROC              glTransformPathNV;
PFNGLPATHPARAMETERIVNVPROC            glPathParameterivNV;
PFNGLPATHPARAMETERINVPROC             glPathParameteriNV;
PFNGLPATHPARAMETERFVNVPROC            glPathParameterfvNV;
PFNGLPATHPARAMETERFNVPROC             glPathParameterfNV;
PFNGLPATHDASHARRAYNVPROC              glPathDashArrayNV;
PFNGLPATHSTENCILFUNCNVPROC            glPathStencilFuncNV;
PFNGLPATHSTENCILDEPTHOFFSETNVPROC     glPathStencilDepthOffsetNV;
PFNGLSTENCILFILLPATHNVPROC            glStencilFillPathNV;
PFNGLSTENCILSTROKEPATHNVPROC          glStencilStrokePathNV;
PFNGLSTENCILFILLPATHINSTANCEDNVPROC   glStencilFillPathInstancedNV;
PFNGLSTENCILSTROKEPATHINSTANCEDNVPROC glStencilStrokePathInstancedNV;
PFNGLPATHCOVERDEPTHFUNCNVPROC         glPathCoverDepthFuncNV;
PFNGLCOVERFILLPATHNVPROC              glCoverFillPathNV;
PFNGLCOVERSTROKEPATHNVPROC            glCoverStrokePathNV;
PFNGLCOVERFILLPATHINSTANCEDNVPROC     glCoverFillPathInstancedNV;
PFNGLCOVERSTROKEPATHINSTANCEDNVPROC   glCoverStrokePathInstancedNV;
PFNGLGETPATHPARAMETERIVNVPROC         glGetPathParameterivNV;
PFNGLGETPATHPARAMETERFVNVPROC         glGetPathParameterfvNV;
PFNGLGETPATHCOMMANDSNVPROC            glGetPathCommandsNV;
PFNGLGETPATHCOORDSNVPROC              glGetPathCoordsNV;
PFNGLGETPATHDASHARRAYNVPROC           glGetPathDashArrayNV;
PFNGLGETPATHMETRICSNVPROC             glGetPathMetricsNV;
PFNGLGETPATHMETRICRANGENVPROC         glGetPathMetricRangeNV;
PFNGLGETPATHSPACINGNVPROC             glGetPathSpacingNV;
PFNGLISPOINTINFILLPATHNVPROC          glIsPointInFillPathNV;
PFNGLISPOINTINSTROKEPATHNVPROC        glIsPointInStrokePathNV;
PFNGLGETPATHLENGTHNVPROC              glGetPathLengthNV;
PFNGLPOINTALONGPATHNVPROC             glPointAlongPathNV;

PFNGLMATRIXLOAD3X2FNVPROC                      glMatrixLoad3x2fNV;
PFNGLMATRIXLOAD3X3FNVPROC                      glMatrixLoad3x3fNV;
PFNGLMATRIXLOADTRANSPOSE3X3FNVPROC             glMatrixLoadTranspose3x3fNV;
PFNGLMATRIXMULT3X2FNVPROC                      glMatrixMult3x2fNV;
PFNGLMATRIXMULT3X3FNVPROC                      glMatrixMult3x3fNV;
PFNGLMATRIXMULTTRANSPOSE3X3FNVPROC             glMatrixMultTranspose3x3fNV;
PFNGLSTENCILTHENCOVERFILLPATHNVPROC            glStencilThenCoverFillPathNV;
PFNGLSTENCILTHENCOVERSTROKEPATHNVPROC          glStencilThenCoverStrokePathNV;
PFNGLSTENCILTHENCOVERFILLPATHINSTANCEDNVPROC   glStencilThenCoverFillPathInstancedNV;
PFNGLSTENCILTHENCOVERSTROKEPATHINSTANCEDNVPROC glStencilThenCoverStrokePathInstancedNV;
PFNGLPATHGLYPHINDEXRANGENVPROC                 glPathGlyphIndexRangeNV;

PFNGLPATHGLYPHINDEXARRAYNVPROC         glPathGlyphIndexArrayNV;
PFNGLPATHMEMORYGLYPHINDEXARRAYNVPROC   glPathMemoryGlyphIndexArrayNV;
PFNGLPROGRAMPATHFRAGMENTINPUTGENNVPROC glProgramPathFragmentInputGenNV;
PFNGLGETPROGRAMRESOURCEFVNVPROC        glGetProgramResourcefvNV;

PFNGLMATRIXFRUSTUMEXTPROC        glMatrixFrustumEXT;
PFNGLMATRIXLOADIDENTITYEXTPROC   glMatrixLoadIdentityEXT;
PFNGLMATRIXLOADTRANSPOSEFEXTPROC glMatrixLoadTransposefEXT;
PFNGLMATRIXLOADTRANSPOSEDEXTPROC glMatrixLoadTransposedEXT;
PFNGLMATRIXLOADFEXTPROC          glMatrixLoadfEXT;
PFNGLMATRIXLOADDEXTPROC          glMatrixLoaddEXT;
PFNGLMATRIXMULTTRANSPOSEFEXTPROC glMatrixMultTransposefEXT;
PFNGLMATRIXMULTTRANSPOSEDEXTPROC glMatrixMultTransposedEXT;
PFNGLMATRIXMULTFEXTPROC          glMatrixMultfEXT;
PFNGLMATRIXMULTDEXTPROC          glMatrixMultdEXT;
PFNGLMATRIXORTHOEXTPROC          glMatrixOrthoEXT;
PFNGLMATRIXPOPEXTPROC            glMatrixPopEXT;
PFNGLMATRIXPUSHEXTPROC           glMatrixPushEXT;
PFNGLMATRIXROTATEFEXTPROC        glMatrixRotatefEXT;
PFNGLMATRIXROTATEDEXTPROC        glMatrixRotatedEXT;
PFNGLMATRIXSCALEFEXTPROC         glMatrixScalefEXT;
PFNGLMATRIXSCALEDEXTPROC         glMatrixScaledEXT;
PFNGLMATRIXTRANSLATEFEXTPROC     glMatrixTranslatefEXT;
PFNGLMATRIXTRANSLATEDEXTPROC     glMatrixTranslatedEXT;
#endif /* defined(GL_NV_path_rendering) */

#if defined(GL_NV_polygon_mode)
PFNGLPOLYGONMODENVPROC glPolygonModeNV;
#endif /* defined(GL_NV_polygon_mode) */

#if defined(GL_NV_read_buffer)
PFNGLREADBUFFERNVPROC glReadBufferNV;
#endif /* defined(GL_NV_read_buffer) */

#if defined(GL_NV_sample_locations)
PFNGLFRAMEBUFFERSAMPLELOCATIONSFVNVPROC      glFramebufferSampleLocationsfvNV;
PFNGLNAMEDFRAMEBUFFERSAMPLELOCATIONSFVNVPROC glNamedFramebufferSampleLocationsfvNV;
PFNGLRESOLVEDEPTHVALUESNVPROC                glResolveDepthValuesNV;
#endif /* defined(GL_NV_sample_locations) */

#if defined(GL_NV_scissor_exclusive)
PFNGLSCISSOREXCLUSIVENVPROC       glScissorExclusiveNV;
PFNGLSCISSOREXCLUSIVEARRAYVNVPROC glScissorExclusiveArrayvNV;
#endif /* defined(GL_NV_scissor_exclusive) */

#if defined(GL_NV_shading_rate_image)
PFNGLBINDSHADINGRATEIMAGENVPROC           glBindShadingRateImageNV;
PFNGLGETSHADINGRATEIMAGEPALETTENVPROC     glGetShadingRateImagePaletteNV;
PFNGLGETSHADINGRATESAMPLELOCATIONIVNVPROC glGetShadingRateSampleLocationivNV;
PFNGLSHADINGRATEIMAGEBARRIERNVPROC        glShadingRateImageBarrierNV;
PFNGLSHADINGRATEIMAGEPALETTENVPROC        glShadingRateImagePaletteNV;
PFNGLSHADINGRATESAMPLEORDERNVPROC         glShadingRateSampleOrderNV;
PFNGLSHADINGRATESAMPLEORDERCUSTOMNVPROC   glShadingRateSampleOrderCustomNV;
#endif /* defined(GL_NV_shading_rate_image) */

#if defined(GL_NV_viewport_array)
PFNGLVIEWPORTARRAYVNVPROC     glViewportArrayvNV;
PFNGLVIEWPORTINDEXEDFNVPROC   glViewportIndexedfNV;
PFNGLVIEWPORTINDEXEDFVNVPROC  glViewportIndexedfvNV;
PFNGLSCISSORARRAYVNVPROC      glScissorArrayvNV;
PFNGLSCISSORINDEXEDNVPROC     glScissorIndexedNV;
PFNGLSCISSORINDEXEDVNVPROC    glScissorIndexedvNV;
PFNGLDEPTHRANGEARRAYFVNVPROC  glDepthRangeArrayfvNV;
PFNGLDEPTHRANGEINDEXEDFNVPROC glDepthRangeIndexedfNV;
PFNGLGETFLOATI_VNVPROC        glGetFloati_vNV;
PFNGLENABLEINVPROC            glEnableiNV;
PFNGLDISABLEINVPROC           glDisableiNV;
PFNGLISENABLEDINVPROC         glIsEnablediNV;
#endif /* defined(GL_NV_viewport_array) */

#if defined(GL_NV_viewport_swizzle)
PFNGLVIEWPORTSWIZZLENVPROC glViewportSwizzleNV;
#endif /* defined(GL_NV_viewport_swizzle) */

#if defined(GL_OES_EGL_image)
PFNGLEGLIMAGETARGETTEXTURE2DOESPROC           glEGLImageTargetTexture2DOES;
PFNGLEGLIMAGETARGETRENDERBUFFERSTORAGEOESPROC glEGLImageTargetRenderbufferStorageOES;
#endif /* defined(GL_OES_EGL_image) */

#if defined(GL_OES_copy_image)
PFNGLCOPYIMAGESUBDATAOESPROC glCopyImageSubDataOES;
#endif /* defined(GL_OES_copy_image) */

#if defined(GL_OES_draw_buffers_indexed)
PFNGLENABLEIOESPROC                glEnableiOES;
PFNGLDISABLEIOESPROC               glDisableiOES;
PFNGLBLENDEQUATIONIOESPROC         glBlendEquationiOES;
PFNGLBLENDEQUATIONSEPARATEIOESPROC glBlendEquationSeparateiOES;
PFNGLBLENDFUNCIOESPROC             glBlendFunciOES;
PFNGLBLENDFUNCSEPARATEIOESPROC     glBlendFuncSeparateiOES;
PFNGLCOLORMASKIOESPROC             glColorMaskiOES;
PFNGLISENABLEDIOESPROC             glIsEnablediOES;
#endif /* defined(GL_OES_draw_buffers_indexed) */

#if defined(GL_OES_draw_elements_base_vertex)
PFNGLDRAWELEMENTSBASEVERTEXOESPROC          glDrawElementsBaseVertexOES;
PFNGLDRAWRANGEELEMENTSBASEVERTEXOESPROC     glDrawRangeElementsBaseVertexOES;
PFNGLDRAWELEMENTSINSTANCEDBASEVERTEXOESPROC glDrawElementsInstancedBaseVertexOES;
#endif /* defined(GL_OES_draw_elements_base_vertex) */

#if defined(GL_OES_geometry_shader)
PFNGLFRAMEBUFFERTEXTUREOESPROC glFramebufferTextureOES;
#endif /* defined(GL_OES_geometry_shader) */

#if defined(GL_OES_get_program_binary)
PFNGLGETPROGRAMBINARYOESPROC glGetProgramBinaryOES;
PFNGLPROGRAMBINARYOESPROC    glProgramBinaryOES;
#endif /* defined(GL_OES_get_program_binary) */

#if defined(GL_OES_mapbuffer)
PFNGLMAPBUFFEROESPROC         glMapBufferOES;
PFNGLUNMAPBUFFEROESPROC       glUnmapBufferOES;
PFNGLGETBUFFERPOINTERVOESPROC glGetBufferPointervOES;
#endif /* defined(GL_OES_mapbuffer) */

#if defined(GL_OES_primitive_bounding_box)
PFNGLPRIMITIVEBOUNDINGBOXOESPROC glPrimitiveBoundingBoxOES;
#endif /* defined(GL_OES_primitive_bounding_box) */

#if defined(GL_OES_sample_shading)
PFNGLMINSAMPLESHADINGOESPROC glMinSampleShadingOES;
#endif /* defined(GL_OES_sample_shading) */

#if defined(GL_OES_tessellation_shader)
PFNGLPATCHPARAMETERIOESPROC glPatchParameteriOES;
#endif /* defined(GL_OES_tessellation_shader) */

#if defined(GL_OES_texture_3D)
PFNGLTEXIMAGE3DOESPROC              glTexImage3DOES;
PFNGLTEXSUBIMAGE3DOESPROC           glTexSubImage3DOES;
PFNGLCOPYTEXSUBIMAGE3DOESPROC       glCopyTexSubImage3DOES;
PFNGLCOMPRESSEDTEXIMAGE3DOESPROC    glCompressedTexImage3DOES;
PFNGLCOMPRESSEDTEXSUBIMAGE3DOESPROC glCompressedTexSubImage3DOES;
PFNGLFRAMEBUFFERTEXTURE3DOESPROC    glFramebufferTexture3DOES;
#endif /* defined(GL_OES_texture_3D) */

#if defined(GL_OES_texture_border_clamp)
PFNGLTEXPARAMETERIIVOESPROC         glTexParameterIivOES;
PFNGLTEXPARAMETERIUIVOESPROC        glTexParameterIuivOES;
PFNGLGETTEXPARAMETERIIVOESPROC      glGetTexParameterIivOES;
PFNGLGETTEXPARAMETERIUIVOESPROC     glGetTexParameterIuivOES;
PFNGLSAMPLERPARAMETERIIVOESPROC     glSamplerParameterIivOES;
PFNGLSAMPLERPARAMETERIUIVOESPROC    glSamplerParameterIuivOES;
PFNGLGETSAMPLERPARAMETERIIVOESPROC  glGetSamplerParameterIivOES;
PFNGLGETSAMPLERPARAMETERIUIVOESPROC glGetSamplerParameterIuivOES;
#endif /* defined(GL_OES_texture_border_clamp) */

#if defined(GL_OES_texture_buffer)
PFNGLTEXBUFFEROESPROC      glTexBufferOES;
PFNGLTEXBUFFERRANGEOESPROC glTexBufferRangeOES;
#endif /* defined(GL_OES_texture_buffer) */

#if defined(GL_OES_texture_storage_multisample_2d_array)
PFNGLTEXSTORAGE3DMULTISAMPLEOESPROC glTexStorage3DMultisampleOES;
#endif /* defined(GL_OES_texture_storage_multisample_2d_array) */

#if defined(GL_OES_texture_view)
PFNGLTEXTUREVIEWOESPROC glTextureViewOES;
#endif /* defined(GL_OES_texture_view) */

#if defined(GL_OES_vertex_array_object)
PFNGLBINDVERTEXARRAYOESPROC    glBindVertexArrayOES;
PFNGLDELETEVERTEXARRAYSOESPROC glDeleteVertexArraysOES;
PFNGLGENVERTEXARRAYSOESPROC    glGenVertexArraysOES;
PFNGLISVERTEXARRAYOESPROC      glIsVertexArrayOES;
#endif /* defined(GL_OES_vertex_array_object) */

#if defined(GL_OES_viewport_array)
PFNGLVIEWPORTARRAYVOESPROC     glViewportArrayvOES;
PFNGLVIEWPORTINDEXEDFOESPROC   glViewportIndexedfOES;
PFNGLVIEWPORTINDEXEDFVOESPROC  glViewportIndexedfvOES;
PFNGLSCISSORARRAYVOESPROC      glScissorArrayvOES;
PFNGLSCISSORINDEXEDOESPROC     glScissorIndexedOES;
PFNGLSCISSORINDEXEDVOESPROC    glScissorIndexedvOES;
PFNGLDEPTHRANGEARRAYFVOESPROC  glDepthRangeArrayfvOES;
PFNGLDEPTHRANGEINDEXEDFOESPROC glDepthRangeIndexedfOES;
PFNGLGETFLOATI_VOESPROC        glGetFloati_vOES;
#endif /* defined(GL_OES_viewport_array) */

#if defined(GL_OVR_multiview)
PFNGLFRAMEBUFFERTEXTUREMULTIVIEWOVRPROC glFramebufferTextureMultiviewOVR;
#endif /* defined(GL_OVR_multiview) */

#if defined(GL_OVR_multiview_multisampled_render_to_texture)
PFNGLFRAMEBUFFERTEXTUREMULTISAMPLEMULTIVIEWOVRPROC glFramebufferTextureMultisampleMultiviewOVR;
#endif /* defined(GL_OVR_multiview_multisampled_render_to_texture) */

#if defined(GL_QCOM_alpha_test)
PFNGLALPHAFUNCQCOMPROC glAlphaFuncQCOM;
#endif /* defined(GL_QCOM_alpha_test) */

#if defined(GL_QCOM_driver_control)
PFNGLGETDRIVERCONTROLSQCOMPROC      glGetDriverControlsQCOM;
PFNGLGETDRIVERCONTROLSTRINGQCOMPROC glGetDriverControlStringQCOM;
PFNGLENABLEDRIVERCONTROLQCOMPROC    glEnableDriverControlQCOM;
PFNGLDISABLEDRIVERCONTROLQCOMPROC   glDisableDriverControlQCOM;
#endif /* defined(GL_QCOM_driver_control) */

#if defined(GL_QCOM_extended_get)
PFNGLEXTGETTEXTURESQCOMPROC             glExtGetTexturesQCOM;
PFNGLEXTGETBUFFERSQCOMPROC              glExtGetBuffersQCOM;
PFNGLEXTGETRENDERBUFFERSQCOMPROC        glExtGetRenderbuffersQCOM;
PFNGLEXTGETFRAMEBUFFERSQCOMPROC         glExtGetFramebuffersQCOM;
PFNGLEXTGETTEXLEVELPARAMETERIVQCOMPROC  glExtGetTexLevelParameterivQCOM;
PFNGLEXTTEXOBJECTSTATEOVERRIDEIQCOMPROC glExtTexObjectStateOverrideiQCOM;
PFNGLEXTGETTEXSUBIMAGEQCOMPROC          glExtGetTexSubImageQCOM;
PFNGLEXTGETBUFFERPOINTERVQCOMPROC       glExtGetBufferPointervQCOM;
#endif /* defined(GL_QCOM_extended_get) */

#if defined(GL_QCOM_extended_get2)
PFNGLEXTGETSHADERSQCOMPROC             glExtGetShadersQCOM;
PFNGLEXTGETPROGRAMSQCOMPROC            glExtGetProgramsQCOM;
PFNGLEXTISPROGRAMBINARYQCOMPROC        glExtIsProgramBinaryQCOM;
PFNGLEXTGETPROGRAMBINARYSOURCEQCOMPROC glExtGetProgramBinarySourceQCOM;
#endif /* defined(GL_QCOM_extended_get2) */

#if defined(GL_QCOM_framebuffer_foveated)
PFNGLFRAMEBUFFERFOVEATIONCONFIGQCOMPROC     glFramebufferFoveationConfigQCOM;
PFNGLFRAMEBUFFERFOVEATIONPARAMETERSQCOMPROC glFramebufferFoveationParametersQCOM;
#endif /* defined(GL_QCOM_framebuffer_foveated) */

#if defined(GL_QCOM_motion_estimation)
PFNGLTEXESTIMATEMOTIONQCOMPROC        glTexEstimateMotionQCOM;
PFNGLTEXESTIMATEMOTIONREGIONSQCOMPROC glTexEstimateMotionRegionsQCOM;
#endif /* defined(GL_QCOM_motion_estimation) */

#if defined(GL_QCOM_frame_extrapolation)
PFNGLEXTRAPOLATETEX2DQCOMPROC glExtrapolateTex2DQCOM;
#endif /* defined(GL_QCOM_frame_extrapolation) */

#if defined(GL_QCOM_texture_foveated)
PFNGLTEXTUREFOVEATIONPARAMETERSQCOMPROC glTextureFoveationParametersQCOM;
#endif /* defined(GL_QCOM_texture_foveated) */

#if defined(GL_QCOM_shader_framebuffer_fetch_noncoherent)
PFNGLFRAMEBUFFERFETCHBARRIERQCOMPROC glFramebufferFetchBarrierQCOM;
#endif /* defined(GL_QCOM_shader_framebuffer_fetch_noncoherent) */

#if defined(GL_QCOM_shading_rate)
PFNGLSHADINGRATEQCOMPROC glShadingRateQCOM;
#endif /* defined(GL_QCOM_shading_rate) */

#if defined(GL_QCOM_tiled_rendering)
PFNGLSTARTTILINGQCOMPROC glStartTilingQCOM;
PFNGLENDTILINGQCOMPROC   glEndTilingQCOM;
#endif /* defined(GL_QCOM_tiled_rendering) */

/* GLES2W_GENERATE_GLES_DEFINITION */

/**
 * ========================= !DO NOT CHANGE THE ABOVE SECTION MANUALLY! =========================
 * The above section is auto-generated from GLES spec by running:
 * node tools/gles-wrangler-generator/generate.js
 * ========================= !DO NOT CHANGE THE ABOVE SECTION MANUALLY! =========================
 */

void gles2wLoadProcs(PFNGLES2WLOADPROC gles2wLoad) {
    /**
     * ========================= !DO NOT CHANGE THE FOLLOWING SECTION MANUALLY! =========================
     * The following section is auto-generated from GLES spec by running:
     * node tools/gles-wrangler-generator/generate.js
     * ========================= !DO NOT CHANGE THE FOLLOWING SECTION MANUALLY! =========================
     */

    /* GLES2W_GENERATE_GLES_LOAD */
    /* GL_ES_VERSION_2_0 */
    glActiveTexture                       = (PFNGLACTIVETEXTUREPROC)gles2wLoad("glActiveTexture");
    glAttachShader                        = (PFNGLATTACHSHADERPROC)gles2wLoad("glAttachShader");
    glBindAttribLocation                  = (PFNGLBINDATTRIBLOCATIONPROC)gles2wLoad("glBindAttribLocation");
    glBindBuffer                          = (PFNGLBINDBUFFERPROC)gles2wLoad("glBindBuffer");
    glBindFramebuffer                     = (PFNGLBINDFRAMEBUFFERPROC)gles2wLoad("glBindFramebuffer");
    glBindRenderbuffer                    = (PFNGLBINDRENDERBUFFERPROC)gles2wLoad("glBindRenderbuffer");
    glBindTexture                         = (PFNGLBINDTEXTUREPROC)gles2wLoad("glBindTexture");
    glBlendColor                          = (PFNGLBLENDCOLORPROC)gles2wLoad("glBlendColor");
    glBlendEquation                       = (PFNGLBLENDEQUATIONPROC)gles2wLoad("glBlendEquation");
    glBlendEquationSeparate               = (PFNGLBLENDEQUATIONSEPARATEPROC)gles2wLoad("glBlendEquationSeparate");
    glBlendFunc                           = (PFNGLBLENDFUNCPROC)gles2wLoad("glBlendFunc");
    glBlendFuncSeparate                   = (PFNGLBLENDFUNCSEPARATEPROC)gles2wLoad("glBlendFuncSeparate");
    glBufferData                          = (PFNGLBUFFERDATAPROC)gles2wLoad("glBufferData");
    glBufferSubData                       = (PFNGLBUFFERSUBDATAPROC)gles2wLoad("glBufferSubData");
    glCheckFramebufferStatus              = (PFNGLCHECKFRAMEBUFFERSTATUSPROC)gles2wLoad("glCheckFramebufferStatus");
    glClear                               = (PFNGLCLEARPROC)gles2wLoad("glClear");
    glClearColor                          = (PFNGLCLEARCOLORPROC)gles2wLoad("glClearColor");
    glClearDepthf                         = (PFNGLCLEARDEPTHFPROC)gles2wLoad("glClearDepthf");
    glClearStencil                        = (PFNGLCLEARSTENCILPROC)gles2wLoad("glClearStencil");
    glColorMask                           = (PFNGLCOLORMASKPROC)gles2wLoad("glColorMask");
    glCompileShader                       = (PFNGLCOMPILESHADERPROC)gles2wLoad("glCompileShader");
    glCompressedTexImage2D                = (PFNGLCOMPRESSEDTEXIMAGE2DPROC)gles2wLoad("glCompressedTexImage2D");
    glCompressedTexSubImage2D             = (PFNGLCOMPRESSEDTEXSUBIMAGE2DPROC)gles2wLoad("glCompressedTexSubImage2D");
    glCopyTexImage2D                      = (PFNGLCOPYTEXIMAGE2DPROC)gles2wLoad("glCopyTexImage2D");
    glCopyTexSubImage2D                   = (PFNGLCOPYTEXSUBIMAGE2DPROC)gles2wLoad("glCopyTexSubImage2D");
    glCreateProgram                       = (PFNGLCREATEPROGRAMPROC)gles2wLoad("glCreateProgram");
    glCreateShader                        = (PFNGLCREATESHADERPROC)gles2wLoad("glCreateShader");
    glCullFace                            = (PFNGLCULLFACEPROC)gles2wLoad("glCullFace");
    glDeleteBuffers                       = (PFNGLDELETEBUFFERSPROC)gles2wLoad("glDeleteBuffers");
    glDeleteFramebuffers                  = (PFNGLDELETEFRAMEBUFFERSPROC)gles2wLoad("glDeleteFramebuffers");
    glDeleteProgram                       = (PFNGLDELETEPROGRAMPROC)gles2wLoad("glDeleteProgram");
    glDeleteRenderbuffers                 = (PFNGLDELETERENDERBUFFERSPROC)gles2wLoad("glDeleteRenderbuffers");
    glDeleteShader                        = (PFNGLDELETESHADERPROC)gles2wLoad("glDeleteShader");
    glDeleteTextures                      = (PFNGLDELETETEXTURESPROC)gles2wLoad("glDeleteTextures");
    glDepthFunc                           = (PFNGLDEPTHFUNCPROC)gles2wLoad("glDepthFunc");
    glDepthMask                           = (PFNGLDEPTHMASKPROC)gles2wLoad("glDepthMask");
    glDepthRangef                         = (PFNGLDEPTHRANGEFPROC)gles2wLoad("glDepthRangef");
    glDetachShader                        = (PFNGLDETACHSHADERPROC)gles2wLoad("glDetachShader");
    glDisable                             = (PFNGLDISABLEPROC)gles2wLoad("glDisable");
    glDisableVertexAttribArray            = (PFNGLDISABLEVERTEXATTRIBARRAYPROC)gles2wLoad("glDisableVertexAttribArray");
    glDrawArrays                          = (PFNGLDRAWARRAYSPROC)gles2wLoad("glDrawArrays");
    glDrawElements                        = (PFNGLDRAWELEMENTSPROC)gles2wLoad("glDrawElements");
    glEnable                              = (PFNGLENABLEPROC)gles2wLoad("glEnable");
    glEnableVertexAttribArray             = (PFNGLENABLEVERTEXATTRIBARRAYPROC)gles2wLoad("glEnableVertexAttribArray");
    glFinish                              = (PFNGLFINISHPROC)gles2wLoad("glFinish");
    glFlush                               = (PFNGLFLUSHPROC)gles2wLoad("glFlush");
    glFramebufferRenderbuffer             = (PFNGLFRAMEBUFFERRENDERBUFFERPROC)gles2wLoad("glFramebufferRenderbuffer");
    glFramebufferTexture2D                = (PFNGLFRAMEBUFFERTEXTURE2DPROC)gles2wLoad("glFramebufferTexture2D");
    glFrontFace                           = (PFNGLFRONTFACEPROC)gles2wLoad("glFrontFace");
    glGenBuffers                          = (PFNGLGENBUFFERSPROC)gles2wLoad("glGenBuffers");
    glGenerateMipmap                      = (PFNGLGENERATEMIPMAPPROC)gles2wLoad("glGenerateMipmap");
    glGenFramebuffers                     = (PFNGLGENFRAMEBUFFERSPROC)gles2wLoad("glGenFramebuffers");
    glGenRenderbuffers                    = (PFNGLGENRENDERBUFFERSPROC)gles2wLoad("glGenRenderbuffers");
    glGenTextures                         = (PFNGLGENTEXTURESPROC)gles2wLoad("glGenTextures");
    glGetActiveAttrib                     = (PFNGLGETACTIVEATTRIBPROC)gles2wLoad("glGetActiveAttrib");
    glGetActiveUniform                    = (PFNGLGETACTIVEUNIFORMPROC)gles2wLoad("glGetActiveUniform");
    glGetAttachedShaders                  = (PFNGLGETATTACHEDSHADERSPROC)gles2wLoad("glGetAttachedShaders");
    glGetAttribLocation                   = (PFNGLGETATTRIBLOCATIONPROC)gles2wLoad("glGetAttribLocation");
    glGetBooleanv                         = (PFNGLGETBOOLEANVPROC)gles2wLoad("glGetBooleanv");
    glGetBufferParameteriv                = (PFNGLGETBUFFERPARAMETERIVPROC)gles2wLoad("glGetBufferParameteriv");
    glGetError                            = (PFNGLGETERRORPROC)gles2wLoad("glGetError");
    glGetFloatv                           = (PFNGLGETFLOATVPROC)gles2wLoad("glGetFloatv");
    glGetFramebufferAttachmentParameteriv = (PFNGLGETFRAMEBUFFERATTACHMENTPARAMETERIVPROC)gles2wLoad("glGetFramebufferAttachmentParameteriv");
    glGetIntegerv                         = (PFNGLGETINTEGERVPROC)gles2wLoad("glGetIntegerv");
    glGetProgramiv                        = (PFNGLGETPROGRAMIVPROC)gles2wLoad("glGetProgramiv");
    glGetProgramInfoLog                   = (PFNGLGETPROGRAMINFOLOGPROC)gles2wLoad("glGetProgramInfoLog");
    glGetRenderbufferParameteriv          = (PFNGLGETRENDERBUFFERPARAMETERIVPROC)gles2wLoad("glGetRenderbufferParameteriv");
    glGetShaderiv                         = (PFNGLGETSHADERIVPROC)gles2wLoad("glGetShaderiv");
    glGetShaderInfoLog                    = (PFNGLGETSHADERINFOLOGPROC)gles2wLoad("glGetShaderInfoLog");
    glGetShaderPrecisionFormat            = (PFNGLGETSHADERPRECISIONFORMATPROC)gles2wLoad("glGetShaderPrecisionFormat");
    glGetShaderSource                     = (PFNGLGETSHADERSOURCEPROC)gles2wLoad("glGetShaderSource");
    glGetString                           = (PFNGLGETSTRINGPROC)gles2wLoad("glGetString");
    glGetTexParameterfv                   = (PFNGLGETTEXPARAMETERFVPROC)gles2wLoad("glGetTexParameterfv");
    glGetTexParameteriv                   = (PFNGLGETTEXPARAMETERIVPROC)gles2wLoad("glGetTexParameteriv");
    glGetUniformfv                        = (PFNGLGETUNIFORMFVPROC)gles2wLoad("glGetUniformfv");
    glGetUniformiv                        = (PFNGLGETUNIFORMIVPROC)gles2wLoad("glGetUniformiv");
    glGetUniformLocation                  = (PFNGLGETUNIFORMLOCATIONPROC)gles2wLoad("glGetUniformLocation");
    glGetVertexAttribfv                   = (PFNGLGETVERTEXATTRIBFVPROC)gles2wLoad("glGetVertexAttribfv");
    glGetVertexAttribiv                   = (PFNGLGETVERTEXATTRIBIVPROC)gles2wLoad("glGetVertexAttribiv");
    glGetVertexAttribPointerv             = (PFNGLGETVERTEXATTRIBPOINTERVPROC)gles2wLoad("glGetVertexAttribPointerv");
    glHint                                = (PFNGLHINTPROC)gles2wLoad("glHint");
    glIsBuffer                            = (PFNGLISBUFFERPROC)gles2wLoad("glIsBuffer");
    glIsEnabled                           = (PFNGLISENABLEDPROC)gles2wLoad("glIsEnabled");
    glIsFramebuffer                       = (PFNGLISFRAMEBUFFERPROC)gles2wLoad("glIsFramebuffer");
    glIsProgram                           = (PFNGLISPROGRAMPROC)gles2wLoad("glIsProgram");
    glIsRenderbuffer                      = (PFNGLISRENDERBUFFERPROC)gles2wLoad("glIsRenderbuffer");
    glIsShader                            = (PFNGLISSHADERPROC)gles2wLoad("glIsShader");
    glIsTexture                           = (PFNGLISTEXTUREPROC)gles2wLoad("glIsTexture");
    glLineWidth                           = (PFNGLLINEWIDTHPROC)gles2wLoad("glLineWidth");
    glLinkProgram                         = (PFNGLLINKPROGRAMPROC)gles2wLoad("glLinkProgram");
    glPixelStorei                         = (PFNGLPIXELSTOREIPROC)gles2wLoad("glPixelStorei");
    glPolygonOffset                       = (PFNGLPOLYGONOFFSETPROC)gles2wLoad("glPolygonOffset");
    glReadPixels                          = (PFNGLREADPIXELSPROC)gles2wLoad("glReadPixels");
    glReleaseShaderCompiler               = (PFNGLRELEASESHADERCOMPILERPROC)gles2wLoad("glReleaseShaderCompiler");
    glRenderbufferStorage                 = (PFNGLRENDERBUFFERSTORAGEPROC)gles2wLoad("glRenderbufferStorage");
    glSampleCoverage                      = (PFNGLSAMPLECOVERAGEPROC)gles2wLoad("glSampleCoverage");
    glScissor                             = (PFNGLSCISSORPROC)gles2wLoad("glScissor");
    glShaderBinary                        = (PFNGLSHADERBINARYPROC)gles2wLoad("glShaderBinary");
    glShaderSource                        = (PFNGLSHADERSOURCEPROC)gles2wLoad("glShaderSource");
    glStencilFunc                         = (PFNGLSTENCILFUNCPROC)gles2wLoad("glStencilFunc");
    glStencilFuncSeparate                 = (PFNGLSTENCILFUNCSEPARATEPROC)gles2wLoad("glStencilFuncSeparate");
    glStencilMask                         = (PFNGLSTENCILMASKPROC)gles2wLoad("glStencilMask");
    glStencilMaskSeparate                 = (PFNGLSTENCILMASKSEPARATEPROC)gles2wLoad("glStencilMaskSeparate");
    glStencilOp                           = (PFNGLSTENCILOPPROC)gles2wLoad("glStencilOp");
    glStencilOpSeparate                   = (PFNGLSTENCILOPSEPARATEPROC)gles2wLoad("glStencilOpSeparate");
    glTexImage2D                          = (PFNGLTEXIMAGE2DPROC)gles2wLoad("glTexImage2D");
    glTexParameterf                       = (PFNGLTEXPARAMETERFPROC)gles2wLoad("glTexParameterf");
    glTexParameterfv                      = (PFNGLTEXPARAMETERFVPROC)gles2wLoad("glTexParameterfv");
    glTexParameteri                       = (PFNGLTEXPARAMETERIPROC)gles2wLoad("glTexParameteri");
    glTexParameteriv                      = (PFNGLTEXPARAMETERIVPROC)gles2wLoad("glTexParameteriv");
    glTexSubImage2D                       = (PFNGLTEXSUBIMAGE2DPROC)gles2wLoad("glTexSubImage2D");
    glUniform1f                           = (PFNGLUNIFORM1FPROC)gles2wLoad("glUniform1f");
    glUniform1fv                          = (PFNGLUNIFORM1FVPROC)gles2wLoad("glUniform1fv");
    glUniform1i                           = (PFNGLUNIFORM1IPROC)gles2wLoad("glUniform1i");
    glUniform1iv                          = (PFNGLUNIFORM1IVPROC)gles2wLoad("glUniform1iv");
    glUniform2f                           = (PFNGLUNIFORM2FPROC)gles2wLoad("glUniform2f");
    glUniform2fv                          = (PFNGLUNIFORM2FVPROC)gles2wLoad("glUniform2fv");
    glUniform2i                           = (PFNGLUNIFORM2IPROC)gles2wLoad("glUniform2i");
    glUniform2iv                          = (PFNGLUNIFORM2IVPROC)gles2wLoad("glUniform2iv");
    glUniform3f                           = (PFNGLUNIFORM3FPROC)gles2wLoad("glUniform3f");
    glUniform3fv                          = (PFNGLUNIFORM3FVPROC)gles2wLoad("glUniform3fv");
    glUniform3i                           = (PFNGLUNIFORM3IPROC)gles2wLoad("glUniform3i");
    glUniform3iv                          = (PFNGLUNIFORM3IVPROC)gles2wLoad("glUniform3iv");
    glUniform4f                           = (PFNGLUNIFORM4FPROC)gles2wLoad("glUniform4f");
    glUniform4fv                          = (PFNGLUNIFORM4FVPROC)gles2wLoad("glUniform4fv");
    glUniform4i                           = (PFNGLUNIFORM4IPROC)gles2wLoad("glUniform4i");
    glUniform4iv                          = (PFNGLUNIFORM4IVPROC)gles2wLoad("glUniform4iv");
    glUniformMatrix2fv                    = (PFNGLUNIFORMMATRIX2FVPROC)gles2wLoad("glUniformMatrix2fv");
    glUniformMatrix3fv                    = (PFNGLUNIFORMMATRIX3FVPROC)gles2wLoad("glUniformMatrix3fv");
    glUniformMatrix4fv                    = (PFNGLUNIFORMMATRIX4FVPROC)gles2wLoad("glUniformMatrix4fv");
    glUseProgram                          = (PFNGLUSEPROGRAMPROC)gles2wLoad("glUseProgram");
    glValidateProgram                     = (PFNGLVALIDATEPROGRAMPROC)gles2wLoad("glValidateProgram");
    glVertexAttrib1f                      = (PFNGLVERTEXATTRIB1FPROC)gles2wLoad("glVertexAttrib1f");
    glVertexAttrib1fv                     = (PFNGLVERTEXATTRIB1FVPROC)gles2wLoad("glVertexAttrib1fv");
    glVertexAttrib2f                      = (PFNGLVERTEXATTRIB2FPROC)gles2wLoad("glVertexAttrib2f");
    glVertexAttrib2fv                     = (PFNGLVERTEXATTRIB2FVPROC)gles2wLoad("glVertexAttrib2fv");
    glVertexAttrib3f                      = (PFNGLVERTEXATTRIB3FPROC)gles2wLoad("glVertexAttrib3f");
    glVertexAttrib3fv                     = (PFNGLVERTEXATTRIB3FVPROC)gles2wLoad("glVertexAttrib3fv");
    glVertexAttrib4f                      = (PFNGLVERTEXATTRIB4FPROC)gles2wLoad("glVertexAttrib4f");
    glVertexAttrib4fv                     = (PFNGLVERTEXATTRIB4FVPROC)gles2wLoad("glVertexAttrib4fv");
    glVertexAttribPointer                 = (PFNGLVERTEXATTRIBPOINTERPROC)gles2wLoad("glVertexAttribPointer");
    glViewport                            = (PFNGLVIEWPORTPROC)gles2wLoad("glViewport");

#if defined(GL_AMD_framebuffer_multisample_advanced)
    glRenderbufferStorageMultisampleAdvancedAMD      = (PFNGLRENDERBUFFERSTORAGEMULTISAMPLEADVANCEDAMDPROC)gles2wLoad("glRenderbufferStorageMultisampleAdvancedAMD");
    glNamedRenderbufferStorageMultisampleAdvancedAMD = (PFNGLNAMEDRENDERBUFFERSTORAGEMULTISAMPLEADVANCEDAMDPROC)gles2wLoad("glNamedRenderbufferStorageMultisampleAdvancedAMD");
#endif /* defined(GL_AMD_framebuffer_multisample_advanced) */

#if defined(GL_AMD_performance_monitor)
    glGetPerfMonitorGroupsAMD        = (PFNGLGETPERFMONITORGROUPSAMDPROC)gles2wLoad("glGetPerfMonitorGroupsAMD");
    glGetPerfMonitorCountersAMD      = (PFNGLGETPERFMONITORCOUNTERSAMDPROC)gles2wLoad("glGetPerfMonitorCountersAMD");
    glGetPerfMonitorGroupStringAMD   = (PFNGLGETPERFMONITORGROUPSTRINGAMDPROC)gles2wLoad("glGetPerfMonitorGroupStringAMD");
    glGetPerfMonitorCounterStringAMD = (PFNGLGETPERFMONITORCOUNTERSTRINGAMDPROC)gles2wLoad("glGetPerfMonitorCounterStringAMD");
    glGetPerfMonitorCounterInfoAMD   = (PFNGLGETPERFMONITORCOUNTERINFOAMDPROC)gles2wLoad("glGetPerfMonitorCounterInfoAMD");
    glGenPerfMonitorsAMD             = (PFNGLGENPERFMONITORSAMDPROC)gles2wLoad("glGenPerfMonitorsAMD");
    glDeletePerfMonitorsAMD          = (PFNGLDELETEPERFMONITORSAMDPROC)gles2wLoad("glDeletePerfMonitorsAMD");
    glSelectPerfMonitorCountersAMD   = (PFNGLSELECTPERFMONITORCOUNTERSAMDPROC)gles2wLoad("glSelectPerfMonitorCountersAMD");
    glBeginPerfMonitorAMD            = (PFNGLBEGINPERFMONITORAMDPROC)gles2wLoad("glBeginPerfMonitorAMD");
    glEndPerfMonitorAMD              = (PFNGLENDPERFMONITORAMDPROC)gles2wLoad("glEndPerfMonitorAMD");
    glGetPerfMonitorCounterDataAMD   = (PFNGLGETPERFMONITORCOUNTERDATAAMDPROC)gles2wLoad("glGetPerfMonitorCounterDataAMD");
#endif /* defined(GL_AMD_performance_monitor) */

#if defined(GL_ANGLE_framebuffer_blit)
    glBlitFramebufferANGLE = (PFNGLBLITFRAMEBUFFERANGLEPROC)gles2wLoad("glBlitFramebufferANGLE");
#endif /* defined(GL_ANGLE_framebuffer_blit) */

#if defined(GL_ANGLE_framebuffer_multisample)
    glRenderbufferStorageMultisampleANGLE = (PFNGLRENDERBUFFERSTORAGEMULTISAMPLEANGLEPROC)gles2wLoad("glRenderbufferStorageMultisampleANGLE");
#endif /* defined(GL_ANGLE_framebuffer_multisample) */

#if defined(GL_ANGLE_instanced_arrays)
    glDrawArraysInstancedANGLE   = (PFNGLDRAWARRAYSINSTANCEDANGLEPROC)gles2wLoad("glDrawArraysInstancedANGLE");
    glDrawElementsInstancedANGLE = (PFNGLDRAWELEMENTSINSTANCEDANGLEPROC)gles2wLoad("glDrawElementsInstancedANGLE");
    glVertexAttribDivisorANGLE   = (PFNGLVERTEXATTRIBDIVISORANGLEPROC)gles2wLoad("glVertexAttribDivisorANGLE");
#endif /* defined(GL_ANGLE_instanced_arrays) */

#if defined(GL_ANGLE_translated_shader_source)
    glGetTranslatedShaderSourceANGLE = (PFNGLGETTRANSLATEDSHADERSOURCEANGLEPROC)gles2wLoad("glGetTranslatedShaderSourceANGLE");
#endif /* defined(GL_ANGLE_translated_shader_source) */

#if defined(GL_APPLE_copy_texture_levels)
    glCopyTextureLevelsAPPLE = (PFNGLCOPYTEXTURELEVELSAPPLEPROC)gles2wLoad("glCopyTextureLevelsAPPLE");
#endif /* defined(GL_APPLE_copy_texture_levels) */

#if defined(GL_APPLE_framebuffer_multisample)
    glRenderbufferStorageMultisampleAPPLE = (PFNGLRENDERBUFFERSTORAGEMULTISAMPLEAPPLEPROC)gles2wLoad("glRenderbufferStorageMultisampleAPPLE");
    glResolveMultisampleFramebufferAPPLE  = (PFNGLRESOLVEMULTISAMPLEFRAMEBUFFERAPPLEPROC)gles2wLoad("glResolveMultisampleFramebufferAPPLE");
#endif /* defined(GL_APPLE_framebuffer_multisample) */

#if defined(GL_APPLE_sync)
    glFenceSyncAPPLE      = (PFNGLFENCESYNCAPPLEPROC)gles2wLoad("glFenceSyncAPPLE");
    glIsSyncAPPLE         = (PFNGLISSYNCAPPLEPROC)gles2wLoad("glIsSyncAPPLE");
    glDeleteSyncAPPLE     = (PFNGLDELETESYNCAPPLEPROC)gles2wLoad("glDeleteSyncAPPLE");
    glClientWaitSyncAPPLE = (PFNGLCLIENTWAITSYNCAPPLEPROC)gles2wLoad("glClientWaitSyncAPPLE");
    glWaitSyncAPPLE       = (PFNGLWAITSYNCAPPLEPROC)gles2wLoad("glWaitSyncAPPLE");
    glGetInteger64vAPPLE  = (PFNGLGETINTEGER64VAPPLEPROC)gles2wLoad("glGetInteger64vAPPLE");
    glGetSyncivAPPLE      = (PFNGLGETSYNCIVAPPLEPROC)gles2wLoad("glGetSyncivAPPLE");
#endif /* defined(GL_APPLE_sync) */

#if defined(GL_EXT_EGL_image_storage)
    glEGLImageTargetTexStorageEXT = (PFNGLEGLIMAGETARGETTEXSTORAGEEXTPROC)gles2wLoad("glEGLImageTargetTexStorageEXT");

    glEGLImageTargetTextureStorageEXT = (PFNGLEGLIMAGETARGETTEXTURESTORAGEEXTPROC)gles2wLoad("glEGLImageTargetTextureStorageEXT");
#endif /* defined(GL_EXT_EGL_image_storage) */

#if defined(GL_EXT_base_instance)
    glDrawArraysInstancedBaseInstanceEXT             = (PFNGLDRAWARRAYSINSTANCEDBASEINSTANCEEXTPROC)gles2wLoad("glDrawArraysInstancedBaseInstanceEXT");
    glDrawElementsInstancedBaseInstanceEXT           = (PFNGLDRAWELEMENTSINSTANCEDBASEINSTANCEEXTPROC)gles2wLoad("glDrawElementsInstancedBaseInstanceEXT");
    glDrawElementsInstancedBaseVertexBaseInstanceEXT = (PFNGLDRAWELEMENTSINSTANCEDBASEVERTEXBASEINSTANCEEXTPROC)gles2wLoad("glDrawElementsInstancedBaseVertexBaseInstanceEXT");
#endif /* defined(GL_EXT_base_instance) */

#if defined(GL_EXT_blend_func_extended)
    glBindFragDataLocationIndexedEXT     = (PFNGLBINDFRAGDATALOCATIONINDEXEDEXTPROC)gles2wLoad("glBindFragDataLocationIndexedEXT");
    glBindFragDataLocationEXT            = (PFNGLBINDFRAGDATALOCATIONEXTPROC)gles2wLoad("glBindFragDataLocationEXT");
    glGetProgramResourceLocationIndexEXT = (PFNGLGETPROGRAMRESOURCELOCATIONINDEXEXTPROC)gles2wLoad("glGetProgramResourceLocationIndexEXT");
    glGetFragDataIndexEXT                = (PFNGLGETFRAGDATAINDEXEXTPROC)gles2wLoad("glGetFragDataIndexEXT");
#endif /* defined(GL_EXT_blend_func_extended) */

#if defined(GL_EXT_buffer_storage)
    glBufferStorageEXT = (PFNGLBUFFERSTORAGEEXTPROC)gles2wLoad("glBufferStorageEXT");
#endif /* defined(GL_EXT_buffer_storage) */

#if defined(GL_EXT_clear_texture)
    glClearTexImageEXT    = (PFNGLCLEARTEXIMAGEEXTPROC)gles2wLoad("glClearTexImageEXT");
    glClearTexSubImageEXT = (PFNGLCLEARTEXSUBIMAGEEXTPROC)gles2wLoad("glClearTexSubImageEXT");
#endif /* defined(GL_EXT_clear_texture) */

#if defined(GL_EXT_clip_control)
    glClipControlEXT = (PFNGLCLIPCONTROLEXTPROC)gles2wLoad("glClipControlEXT");
#endif /* defined(GL_EXT_clip_control) */

#if defined(GL_EXT_copy_image)
    glCopyImageSubDataEXT = (PFNGLCOPYIMAGESUBDATAEXTPROC)gles2wLoad("glCopyImageSubDataEXT");
#endif /* defined(GL_EXT_copy_image) */

#if defined(GL_EXT_debug_label)
    glLabelObjectEXT    = (PFNGLLABELOBJECTEXTPROC)gles2wLoad("glLabelObjectEXT");
    glGetObjectLabelEXT = (PFNGLGETOBJECTLABELEXTPROC)gles2wLoad("glGetObjectLabelEXT");
#endif /* defined(GL_EXT_debug_label) */

#if defined(GL_EXT_debug_marker)
    glInsertEventMarkerEXT = (PFNGLINSERTEVENTMARKEREXTPROC)gles2wLoad("glInsertEventMarkerEXT");
    glPushGroupMarkerEXT   = (PFNGLPUSHGROUPMARKEREXTPROC)gles2wLoad("glPushGroupMarkerEXT");
    glPopGroupMarkerEXT    = (PFNGLPOPGROUPMARKEREXTPROC)gles2wLoad("glPopGroupMarkerEXT");
#endif /* defined(GL_EXT_debug_marker) */

#if defined(GL_EXT_discard_framebuffer)
    glDiscardFramebufferEXT = (PFNGLDISCARDFRAMEBUFFEREXTPROC)gles2wLoad("glDiscardFramebufferEXT");
#endif /* defined(GL_EXT_discard_framebuffer) */

#if defined(GL_EXT_disjoint_timer_query)
    glGenQueriesEXT          = (PFNGLGENQUERIESEXTPROC)gles2wLoad("glGenQueriesEXT");
    glDeleteQueriesEXT       = (PFNGLDELETEQUERIESEXTPROC)gles2wLoad("glDeleteQueriesEXT");
    glIsQueryEXT             = (PFNGLISQUERYEXTPROC)gles2wLoad("glIsQueryEXT");
    glBeginQueryEXT          = (PFNGLBEGINQUERYEXTPROC)gles2wLoad("glBeginQueryEXT");
    glEndQueryEXT            = (PFNGLENDQUERYEXTPROC)gles2wLoad("glEndQueryEXT");
    glQueryCounterEXT        = (PFNGLQUERYCOUNTEREXTPROC)gles2wLoad("glQueryCounterEXT");
    glGetQueryivEXT          = (PFNGLGETQUERYIVEXTPROC)gles2wLoad("glGetQueryivEXT");
    glGetQueryObjectivEXT    = (PFNGLGETQUERYOBJECTIVEXTPROC)gles2wLoad("glGetQueryObjectivEXT");
    glGetQueryObjectuivEXT   = (PFNGLGETQUERYOBJECTUIVEXTPROC)gles2wLoad("glGetQueryObjectuivEXT");
    glGetQueryObjecti64vEXT  = (PFNGLGETQUERYOBJECTI64VEXTPROC)gles2wLoad("glGetQueryObjecti64vEXT");
    glGetQueryObjectui64vEXT = (PFNGLGETQUERYOBJECTUI64VEXTPROC)gles2wLoad("glGetQueryObjectui64vEXT");
    glGetInteger64vEXT       = (PFNGLGETINTEGER64VEXTPROC)gles2wLoad("glGetInteger64vEXT");
#endif /* defined(GL_EXT_disjoint_timer_query) */

#if defined(GL_EXT_draw_buffers)
    glDrawBuffersEXT = (PFNGLDRAWBUFFERSEXTPROC)gles2wLoad("glDrawBuffersEXT");
#endif /* defined(GL_EXT_draw_buffers) */

#if defined(GL_EXT_draw_buffers_indexed)
    glEnableiEXT                = (PFNGLENABLEIEXTPROC)gles2wLoad("glEnableiEXT");
    glDisableiEXT               = (PFNGLDISABLEIEXTPROC)gles2wLoad("glDisableiEXT");
    glBlendEquationiEXT         = (PFNGLBLENDEQUATIONIEXTPROC)gles2wLoad("glBlendEquationiEXT");
    glBlendEquationSeparateiEXT = (PFNGLBLENDEQUATIONSEPARATEIEXTPROC)gles2wLoad("glBlendEquationSeparateiEXT");
    glBlendFunciEXT             = (PFNGLBLENDFUNCIEXTPROC)gles2wLoad("glBlendFunciEXT");
    glBlendFuncSeparateiEXT     = (PFNGLBLENDFUNCSEPARATEIEXTPROC)gles2wLoad("glBlendFuncSeparateiEXT");
    glColorMaskiEXT             = (PFNGLCOLORMASKIEXTPROC)gles2wLoad("glColorMaskiEXT");
    glIsEnablediEXT             = (PFNGLISENABLEDIEXTPROC)gles2wLoad("glIsEnablediEXT");
#endif /* defined(GL_EXT_draw_buffers_indexed) */

#if defined(GL_EXT_draw_elements_base_vertex)
    glDrawElementsBaseVertexEXT          = (PFNGLDRAWELEMENTSBASEVERTEXEXTPROC)gles2wLoad("glDrawElementsBaseVertexEXT");
    glDrawRangeElementsBaseVertexEXT     = (PFNGLDRAWRANGEELEMENTSBASEVERTEXEXTPROC)gles2wLoad("glDrawRangeElementsBaseVertexEXT");
    glDrawElementsInstancedBaseVertexEXT = (PFNGLDRAWELEMENTSINSTANCEDBASEVERTEXEXTPROC)gles2wLoad("glDrawElementsInstancedBaseVertexEXT");
    glMultiDrawElementsBaseVertexEXT     = (PFNGLMULTIDRAWELEMENTSBASEVERTEXEXTPROC)gles2wLoad("glMultiDrawElementsBaseVertexEXT");
#endif /* defined(GL_EXT_draw_elements_base_vertex) */

#if defined(GL_EXT_draw_instanced)
    glDrawArraysInstancedEXT   = (PFNGLDRAWARRAYSINSTANCEDEXTPROC)gles2wLoad("glDrawArraysInstancedEXT");
    glDrawElementsInstancedEXT = (PFNGLDRAWELEMENTSINSTANCEDEXTPROC)gles2wLoad("glDrawElementsInstancedEXT");
#endif /* defined(GL_EXT_draw_instanced) */

#if defined(GL_EXT_draw_transform_feedback)
    glDrawTransformFeedbackEXT          = (PFNGLDRAWTRANSFORMFEEDBACKEXTPROC)gles2wLoad("glDrawTransformFeedbackEXT");
    glDrawTransformFeedbackInstancedEXT = (PFNGLDRAWTRANSFORMFEEDBACKINSTANCEDEXTPROC)gles2wLoad("glDrawTransformFeedbackInstancedEXT");
#endif /* defined(GL_EXT_draw_transform_feedback) */

#if defined(GL_EXT_external_buffer)
    glBufferStorageExternalEXT      = (PFNGLBUFFERSTORAGEEXTERNALEXTPROC)gles2wLoad("glBufferStorageExternalEXT");
    glNamedBufferStorageExternalEXT = (PFNGLNAMEDBUFFERSTORAGEEXTERNALEXTPROC)gles2wLoad("glNamedBufferStorageExternalEXT");
#endif /* defined(GL_EXT_external_buffer) */

#if defined(GL_EXT_geometry_shader)
    glFramebufferTextureEXT = (PFNGLFRAMEBUFFERTEXTUREEXTPROC)gles2wLoad("glFramebufferTextureEXT");
#endif /* defined(GL_EXT_geometry_shader) */

#if defined(GL_EXT_instanced_arrays)
    glVertexAttribDivisorEXT = (PFNGLVERTEXATTRIBDIVISOREXTPROC)gles2wLoad("glVertexAttribDivisorEXT");
#endif /* defined(GL_EXT_instanced_arrays) */

#if defined(GL_EXT_map_buffer_range)
    glMapBufferRangeEXT         = (PFNGLMAPBUFFERRANGEEXTPROC)gles2wLoad("glMapBufferRangeEXT");
    glFlushMappedBufferRangeEXT = (PFNGLFLUSHMAPPEDBUFFERRANGEEXTPROC)gles2wLoad("glFlushMappedBufferRangeEXT");
#endif /* defined(GL_EXT_map_buffer_range) */

#if defined(GL_EXT_memory_object)
    glGetUnsignedBytevEXT           = (PFNGLGETUNSIGNEDBYTEVEXTPROC)gles2wLoad("glGetUnsignedBytevEXT");
    glGetUnsignedBytei_vEXT         = (PFNGLGETUNSIGNEDBYTEI_VEXTPROC)gles2wLoad("glGetUnsignedBytei_vEXT");
    glDeleteMemoryObjectsEXT        = (PFNGLDELETEMEMORYOBJECTSEXTPROC)gles2wLoad("glDeleteMemoryObjectsEXT");
    glIsMemoryObjectEXT             = (PFNGLISMEMORYOBJECTEXTPROC)gles2wLoad("glIsMemoryObjectEXT");
    glCreateMemoryObjectsEXT        = (PFNGLCREATEMEMORYOBJECTSEXTPROC)gles2wLoad("glCreateMemoryObjectsEXT");
    glMemoryObjectParameterivEXT    = (PFNGLMEMORYOBJECTPARAMETERIVEXTPROC)gles2wLoad("glMemoryObjectParameterivEXT");
    glGetMemoryObjectParameterivEXT = (PFNGLGETMEMORYOBJECTPARAMETERIVEXTPROC)gles2wLoad("glGetMemoryObjectParameterivEXT");
    glTexStorageMem2DEXT            = (PFNGLTEXSTORAGEMEM2DEXTPROC)gles2wLoad("glTexStorageMem2DEXT");
    glTexStorageMem2DMultisampleEXT = (PFNGLTEXSTORAGEMEM2DMULTISAMPLEEXTPROC)gles2wLoad("glTexStorageMem2DMultisampleEXT");
    glTexStorageMem3DEXT            = (PFNGLTEXSTORAGEMEM3DEXTPROC)gles2wLoad("glTexStorageMem3DEXT");
    glTexStorageMem3DMultisampleEXT = (PFNGLTEXSTORAGEMEM3DMULTISAMPLEEXTPROC)gles2wLoad("glTexStorageMem3DMultisampleEXT");
    glBufferStorageMemEXT           = (PFNGLBUFFERSTORAGEMEMEXTPROC)gles2wLoad("glBufferStorageMemEXT");

    glTextureStorageMem2DEXT            = (PFNGLTEXTURESTORAGEMEM2DEXTPROC)gles2wLoad("glTextureStorageMem2DEXT");
    glTextureStorageMem2DMultisampleEXT = (PFNGLTEXTURESTORAGEMEM2DMULTISAMPLEEXTPROC)gles2wLoad("glTextureStorageMem2DMultisampleEXT");
    glTextureStorageMem3DEXT            = (PFNGLTEXTURESTORAGEMEM3DEXTPROC)gles2wLoad("glTextureStorageMem3DEXT");
    glTextureStorageMem3DMultisampleEXT = (PFNGLTEXTURESTORAGEMEM3DMULTISAMPLEEXTPROC)gles2wLoad("glTextureStorageMem3DMultisampleEXT");
    glNamedBufferStorageMemEXT          = (PFNGLNAMEDBUFFERSTORAGEMEMEXTPROC)gles2wLoad("glNamedBufferStorageMemEXT");
#endif /* defined(GL_EXT_memory_object) */

#if defined(GL_EXT_memory_object_fd)
    glImportMemoryFdEXT = (PFNGLIMPORTMEMORYFDEXTPROC)gles2wLoad("glImportMemoryFdEXT");
#endif /* defined(GL_EXT_memory_object_fd) */

#if defined(GL_EXT_memory_object_win32)
    glImportMemoryWin32HandleEXT = (PFNGLIMPORTMEMORYWIN32HANDLEEXTPROC)gles2wLoad("glImportMemoryWin32HandleEXT");
    glImportMemoryWin32NameEXT   = (PFNGLIMPORTMEMORYWIN32NAMEEXTPROC)gles2wLoad("glImportMemoryWin32NameEXT");
#endif /* defined(GL_EXT_memory_object_win32) */

#if defined(GL_EXT_multi_draw_arrays)
    glMultiDrawArraysEXT   = (PFNGLMULTIDRAWARRAYSEXTPROC)gles2wLoad("glMultiDrawArraysEXT");
    glMultiDrawElementsEXT = (PFNGLMULTIDRAWELEMENTSEXTPROC)gles2wLoad("glMultiDrawElementsEXT");
#endif /* defined(GL_EXT_multi_draw_arrays) */

#if defined(GL_EXT_multi_draw_indirect)
    glMultiDrawArraysIndirectEXT   = (PFNGLMULTIDRAWARRAYSINDIRECTEXTPROC)gles2wLoad("glMultiDrawArraysIndirectEXT");
    glMultiDrawElementsIndirectEXT = (PFNGLMULTIDRAWELEMENTSINDIRECTEXTPROC)gles2wLoad("glMultiDrawElementsIndirectEXT");
#endif /* defined(GL_EXT_multi_draw_indirect) */

#if defined(GL_EXT_multisampled_render_to_texture)
    glRenderbufferStorageMultisampleEXT  = (PFNGLRENDERBUFFERSTORAGEMULTISAMPLEEXTPROC)gles2wLoad("glRenderbufferStorageMultisampleEXT");
    glFramebufferTexture2DMultisampleEXT = (PFNGLFRAMEBUFFERTEXTURE2DMULTISAMPLEEXTPROC)gles2wLoad("glFramebufferTexture2DMultisampleEXT");
#endif /* defined(GL_EXT_multisampled_render_to_texture) */

#if defined(GL_EXT_multiview_draw_buffers)
    glReadBufferIndexedEXT  = (PFNGLREADBUFFERINDEXEDEXTPROC)gles2wLoad("glReadBufferIndexedEXT");
    glDrawBuffersIndexedEXT = (PFNGLDRAWBUFFERSINDEXEDEXTPROC)gles2wLoad("glDrawBuffersIndexedEXT");
    glGetIntegeri_vEXT      = (PFNGLGETINTEGERI_VEXTPROC)gles2wLoad("glGetIntegeri_vEXT");
#endif /* defined(GL_EXT_multiview_draw_buffers) */

#if defined(GL_EXT_polygon_offset_clamp)
    glPolygonOffsetClampEXT = (PFNGLPOLYGONOFFSETCLAMPEXTPROC)gles2wLoad("glPolygonOffsetClampEXT");
#endif /* defined(GL_EXT_polygon_offset_clamp) */

#if defined(GL_EXT_primitive_bounding_box)
    glPrimitiveBoundingBoxEXT = (PFNGLPRIMITIVEBOUNDINGBOXEXTPROC)gles2wLoad("glPrimitiveBoundingBoxEXT");
#endif /* defined(GL_EXT_primitive_bounding_box) */

#if defined(GL_EXT_raster_multisample)
    glRasterSamplesEXT = (PFNGLRASTERSAMPLESEXTPROC)gles2wLoad("glRasterSamplesEXT");
#endif /* defined(GL_EXT_raster_multisample) */

#if defined(GL_EXT_robustness)
    glGetGraphicsResetStatusEXT = (PFNGLGETGRAPHICSRESETSTATUSEXTPROC)gles2wLoad("glGetGraphicsResetStatusEXT");
    glReadnPixelsEXT            = (PFNGLREADNPIXELSEXTPROC)gles2wLoad("glReadnPixelsEXT");
    glGetnUniformfvEXT          = (PFNGLGETNUNIFORMFVEXTPROC)gles2wLoad("glGetnUniformfvEXT");
    glGetnUniformivEXT          = (PFNGLGETNUNIFORMIVEXTPROC)gles2wLoad("glGetnUniformivEXT");
#endif /* defined(GL_EXT_robustness) */

#if defined(GL_EXT_semaphore)
    glGenSemaphoresEXT              = (PFNGLGENSEMAPHORESEXTPROC)gles2wLoad("glGenSemaphoresEXT");
    glDeleteSemaphoresEXT           = (PFNGLDELETESEMAPHORESEXTPROC)gles2wLoad("glDeleteSemaphoresEXT");
    glIsSemaphoreEXT                = (PFNGLISSEMAPHOREEXTPROC)gles2wLoad("glIsSemaphoreEXT");
    glSemaphoreParameterui64vEXT    = (PFNGLSEMAPHOREPARAMETERUI64VEXTPROC)gles2wLoad("glSemaphoreParameterui64vEXT");
    glGetSemaphoreParameterui64vEXT = (PFNGLGETSEMAPHOREPARAMETERUI64VEXTPROC)gles2wLoad("glGetSemaphoreParameterui64vEXT");
    glWaitSemaphoreEXT              = (PFNGLWAITSEMAPHOREEXTPROC)gles2wLoad("glWaitSemaphoreEXT");
    glSignalSemaphoreEXT            = (PFNGLSIGNALSEMAPHOREEXTPROC)gles2wLoad("glSignalSemaphoreEXT");
#endif /* defined(GL_EXT_semaphore) */

#if defined(GL_EXT_semaphore_fd)
    glImportSemaphoreFdEXT = (PFNGLIMPORTSEMAPHOREFDEXTPROC)gles2wLoad("glImportSemaphoreFdEXT");
#endif /* defined(GL_EXT_semaphore_fd) */

#if defined(GL_EXT_semaphore_win32)
    glImportSemaphoreWin32HandleEXT = (PFNGLIMPORTSEMAPHOREWIN32HANDLEEXTPROC)gles2wLoad("glImportSemaphoreWin32HandleEXT");
    glImportSemaphoreWin32NameEXT   = (PFNGLIMPORTSEMAPHOREWIN32NAMEEXTPROC)gles2wLoad("glImportSemaphoreWin32NameEXT");
#endif /* defined(GL_EXT_semaphore_win32) */

#if defined(GL_EXT_separate_shader_objects)
    glActiveShaderProgramEXT       = (PFNGLACTIVESHADERPROGRAMEXTPROC)gles2wLoad("glActiveShaderProgramEXT");
    glBindProgramPipelineEXT       = (PFNGLBINDPROGRAMPIPELINEEXTPROC)gles2wLoad("glBindProgramPipelineEXT");
    glCreateShaderProgramvEXT      = (PFNGLCREATESHADERPROGRAMVEXTPROC)gles2wLoad("glCreateShaderProgramvEXT");
    glDeleteProgramPipelinesEXT    = (PFNGLDELETEPROGRAMPIPELINESEXTPROC)gles2wLoad("glDeleteProgramPipelinesEXT");
    glGenProgramPipelinesEXT       = (PFNGLGENPROGRAMPIPELINESEXTPROC)gles2wLoad("glGenProgramPipelinesEXT");
    glGetProgramPipelineInfoLogEXT = (PFNGLGETPROGRAMPIPELINEINFOLOGEXTPROC)gles2wLoad("glGetProgramPipelineInfoLogEXT");
    glGetProgramPipelineivEXT      = (PFNGLGETPROGRAMPIPELINEIVEXTPROC)gles2wLoad("glGetProgramPipelineivEXT");
    glIsProgramPipelineEXT         = (PFNGLISPROGRAMPIPELINEEXTPROC)gles2wLoad("glIsProgramPipelineEXT");
    glProgramParameteriEXT         = (PFNGLPROGRAMPARAMETERIEXTPROC)gles2wLoad("glProgramParameteriEXT");
    glProgramUniform1fEXT          = (PFNGLPROGRAMUNIFORM1FEXTPROC)gles2wLoad("glProgramUniform1fEXT");
    glProgramUniform1fvEXT         = (PFNGLPROGRAMUNIFORM1FVEXTPROC)gles2wLoad("glProgramUniform1fvEXT");
    glProgramUniform1iEXT          = (PFNGLPROGRAMUNIFORM1IEXTPROC)gles2wLoad("glProgramUniform1iEXT");
    glProgramUniform1ivEXT         = (PFNGLPROGRAMUNIFORM1IVEXTPROC)gles2wLoad("glProgramUniform1ivEXT");
    glProgramUniform2fEXT          = (PFNGLPROGRAMUNIFORM2FEXTPROC)gles2wLoad("glProgramUniform2fEXT");
    glProgramUniform2fvEXT         = (PFNGLPROGRAMUNIFORM2FVEXTPROC)gles2wLoad("glProgramUniform2fvEXT");
    glProgramUniform2iEXT          = (PFNGLPROGRAMUNIFORM2IEXTPROC)gles2wLoad("glProgramUniform2iEXT");
    glProgramUniform2ivEXT         = (PFNGLPROGRAMUNIFORM2IVEXTPROC)gles2wLoad("glProgramUniform2ivEXT");
    glProgramUniform3fEXT          = (PFNGLPROGRAMUNIFORM3FEXTPROC)gles2wLoad("glProgramUniform3fEXT");
    glProgramUniform3fvEXT         = (PFNGLPROGRAMUNIFORM3FVEXTPROC)gles2wLoad("glProgramUniform3fvEXT");
    glProgramUniform3iEXT          = (PFNGLPROGRAMUNIFORM3IEXTPROC)gles2wLoad("glProgramUniform3iEXT");
    glProgramUniform3ivEXT         = (PFNGLPROGRAMUNIFORM3IVEXTPROC)gles2wLoad("glProgramUniform3ivEXT");
    glProgramUniform4fEXT          = (PFNGLPROGRAMUNIFORM4FEXTPROC)gles2wLoad("glProgramUniform4fEXT");
    glProgramUniform4fvEXT         = (PFNGLPROGRAMUNIFORM4FVEXTPROC)gles2wLoad("glProgramUniform4fvEXT");
    glProgramUniform4iEXT          = (PFNGLPROGRAMUNIFORM4IEXTPROC)gles2wLoad("glProgramUniform4iEXT");
    glProgramUniform4ivEXT         = (PFNGLPROGRAMUNIFORM4IVEXTPROC)gles2wLoad("glProgramUniform4ivEXT");
    glProgramUniformMatrix2fvEXT   = (PFNGLPROGRAMUNIFORMMATRIX2FVEXTPROC)gles2wLoad("glProgramUniformMatrix2fvEXT");
    glProgramUniformMatrix3fvEXT   = (PFNGLPROGRAMUNIFORMMATRIX3FVEXTPROC)gles2wLoad("glProgramUniformMatrix3fvEXT");
    glProgramUniformMatrix4fvEXT   = (PFNGLPROGRAMUNIFORMMATRIX4FVEXTPROC)gles2wLoad("glProgramUniformMatrix4fvEXT");
    glUseProgramStagesEXT          = (PFNGLUSEPROGRAMSTAGESEXTPROC)gles2wLoad("glUseProgramStagesEXT");
    glValidateProgramPipelineEXT   = (PFNGLVALIDATEPROGRAMPIPELINEEXTPROC)gles2wLoad("glValidateProgramPipelineEXT");

    glProgramUniform1uiEXT         = (PFNGLPROGRAMUNIFORM1UIEXTPROC)gles2wLoad("glProgramUniform1uiEXT");
    glProgramUniform2uiEXT         = (PFNGLPROGRAMUNIFORM2UIEXTPROC)gles2wLoad("glProgramUniform2uiEXT");
    glProgramUniform3uiEXT         = (PFNGLPROGRAMUNIFORM3UIEXTPROC)gles2wLoad("glProgramUniform3uiEXT");
    glProgramUniform4uiEXT         = (PFNGLPROGRAMUNIFORM4UIEXTPROC)gles2wLoad("glProgramUniform4uiEXT");
    glProgramUniform1uivEXT        = (PFNGLPROGRAMUNIFORM1UIVEXTPROC)gles2wLoad("glProgramUniform1uivEXT");
    glProgramUniform2uivEXT        = (PFNGLPROGRAMUNIFORM2UIVEXTPROC)gles2wLoad("glProgramUniform2uivEXT");
    glProgramUniform3uivEXT        = (PFNGLPROGRAMUNIFORM3UIVEXTPROC)gles2wLoad("glProgramUniform3uivEXT");
    glProgramUniform4uivEXT        = (PFNGLPROGRAMUNIFORM4UIVEXTPROC)gles2wLoad("glProgramUniform4uivEXT");
    glProgramUniformMatrix2x3fvEXT = (PFNGLPROGRAMUNIFORMMATRIX2X3FVEXTPROC)gles2wLoad("glProgramUniformMatrix2x3fvEXT");
    glProgramUniformMatrix3x2fvEXT = (PFNGLPROGRAMUNIFORMMATRIX3X2FVEXTPROC)gles2wLoad("glProgramUniformMatrix3x2fvEXT");
    glProgramUniformMatrix2x4fvEXT = (PFNGLPROGRAMUNIFORMMATRIX2X4FVEXTPROC)gles2wLoad("glProgramUniformMatrix2x4fvEXT");
    glProgramUniformMatrix4x2fvEXT = (PFNGLPROGRAMUNIFORMMATRIX4X2FVEXTPROC)gles2wLoad("glProgramUniformMatrix4x2fvEXT");
    glProgramUniformMatrix3x4fvEXT = (PFNGLPROGRAMUNIFORMMATRIX3X4FVEXTPROC)gles2wLoad("glProgramUniformMatrix3x4fvEXT");
    glProgramUniformMatrix4x3fvEXT = (PFNGLPROGRAMUNIFORMMATRIX4X3FVEXTPROC)gles2wLoad("glProgramUniformMatrix4x3fvEXT");
#endif /* defined(GL_EXT_separate_shader_objects) */

#if defined(GL_EXT_shader_framebuffer_fetch_non_coherent)
    glFramebufferFetchBarrierEXT = (PFNGLFRAMEBUFFERFETCHBARRIEREXTPROC)gles2wLoad("glFramebufferFetchBarrierEXT");
#endif /* defined(GL_EXT_shader_framebuffer_fetch_non_coherent) */

#if defined(GL_EXT_shader_pixel_local_storage2)
    glFramebufferPixelLocalStorageSizeEXT    = (PFNGLFRAMEBUFFERPIXELLOCALSTORAGESIZEEXTPROC)gles2wLoad("glFramebufferPixelLocalStorageSizeEXT");
    glGetFramebufferPixelLocalStorageSizeEXT = (PFNGLGETFRAMEBUFFERPIXELLOCALSTORAGESIZEEXTPROC)gles2wLoad("glGetFramebufferPixelLocalStorageSizeEXT");
    glClearPixelLocalStorageuiEXT            = (PFNGLCLEARPIXELLOCALSTORAGEUIEXTPROC)gles2wLoad("glClearPixelLocalStorageuiEXT");
#endif /* defined(GL_EXT_shader_pixel_local_storage2) */

#if defined(GL_EXT_sparse_texture)
    glTexPageCommitmentEXT = (PFNGLTEXPAGECOMMITMENTEXTPROC)gles2wLoad("glTexPageCommitmentEXT");
#endif /* defined(GL_EXT_sparse_texture) */

#if defined(GL_EXT_tessellation_shader)
    glPatchParameteriEXT = (PFNGLPATCHPARAMETERIEXTPROC)gles2wLoad("glPatchParameteriEXT");
#endif /* defined(GL_EXT_tessellation_shader) */

#if defined(GL_EXT_texture_border_clamp)
    glTexParameterIivEXT         = (PFNGLTEXPARAMETERIIVEXTPROC)gles2wLoad("glTexParameterIivEXT");
    glTexParameterIuivEXT        = (PFNGLTEXPARAMETERIUIVEXTPROC)gles2wLoad("glTexParameterIuivEXT");
    glGetTexParameterIivEXT      = (PFNGLGETTEXPARAMETERIIVEXTPROC)gles2wLoad("glGetTexParameterIivEXT");
    glGetTexParameterIuivEXT     = (PFNGLGETTEXPARAMETERIUIVEXTPROC)gles2wLoad("glGetTexParameterIuivEXT");
    glSamplerParameterIivEXT     = (PFNGLSAMPLERPARAMETERIIVEXTPROC)gles2wLoad("glSamplerParameterIivEXT");
    glSamplerParameterIuivEXT    = (PFNGLSAMPLERPARAMETERIUIVEXTPROC)gles2wLoad("glSamplerParameterIuivEXT");
    glGetSamplerParameterIivEXT  = (PFNGLGETSAMPLERPARAMETERIIVEXTPROC)gles2wLoad("glGetSamplerParameterIivEXT");
    glGetSamplerParameterIuivEXT = (PFNGLGETSAMPLERPARAMETERIUIVEXTPROC)gles2wLoad("glGetSamplerParameterIuivEXT");
#endif /* defined(GL_EXT_texture_border_clamp) */

#if defined(GL_EXT_texture_buffer)
    glTexBufferEXT      = (PFNGLTEXBUFFEREXTPROC)gles2wLoad("glTexBufferEXT");
    glTexBufferRangeEXT = (PFNGLTEXBUFFERRANGEEXTPROC)gles2wLoad("glTexBufferRangeEXT");
#endif /* defined(GL_EXT_texture_buffer) */

#if defined(GL_EXT_texture_storage)
    glTexStorage1DEXT = (PFNGLTEXSTORAGE1DEXTPROC)gles2wLoad("glTexStorage1DEXT");
    glTexStorage2DEXT = (PFNGLTEXSTORAGE2DEXTPROC)gles2wLoad("glTexStorage2DEXT");
    glTexStorage3DEXT = (PFNGLTEXSTORAGE3DEXTPROC)gles2wLoad("glTexStorage3DEXT");

    glTextureStorage1DEXT = (PFNGLTEXTURESTORAGE1DEXTPROC)gles2wLoad("glTextureStorage1DEXT");
    glTextureStorage2DEXT = (PFNGLTEXTURESTORAGE2DEXTPROC)gles2wLoad("glTextureStorage2DEXT");
    glTextureStorage3DEXT = (PFNGLTEXTURESTORAGE3DEXTPROC)gles2wLoad("glTextureStorage3DEXT");
#endif /* defined(GL_EXT_texture_storage) */

#if defined(GL_EXT_texture_view)
    glTextureViewEXT = (PFNGLTEXTUREVIEWEXTPROC)gles2wLoad("glTextureViewEXT");
#endif /* defined(GL_EXT_texture_view) */

#if defined(GL_NV_timeline_semaphore)
    glCreateSemaphoresNV        = (PFNGLCREATESEMAPHORESNVPROC)gles2wLoad("glCreateSemaphoresNV");
    glSemaphoreParameterivNV    = (PFNGLSEMAPHOREPARAMETERIVNVPROC)gles2wLoad("glSemaphoreParameterivNV");
    glGetSemaphoreParameterivNV = (PFNGLGETSEMAPHOREPARAMETERIVNVPROC)gles2wLoad("glGetSemaphoreParameterivNV");
#endif /* defined(GL_NV_timeline_semaphore) */

#if defined(GL_EXT_win32_keyed_mutex)
    glAcquireKeyedMutexWin32EXT = (PFNGLACQUIREKEYEDMUTEXWIN32EXTPROC)gles2wLoad("glAcquireKeyedMutexWin32EXT");
    glReleaseKeyedMutexWin32EXT = (PFNGLRELEASEKEYEDMUTEXWIN32EXTPROC)gles2wLoad("glReleaseKeyedMutexWin32EXT");
#endif /* defined(GL_EXT_win32_keyed_mutex) */

#if defined(GL_EXT_window_rectangles)
    glWindowRectanglesEXT = (PFNGLWINDOWRECTANGLESEXTPROC)gles2wLoad("glWindowRectanglesEXT");
#endif /* defined(GL_EXT_window_rectangles) */

#if defined(GL_IMG_bindless_texture)
    glGetTextureHandleIMG          = (PFNGLGETTEXTUREHANDLEIMGPROC)gles2wLoad("glGetTextureHandleIMG");
    glGetTextureSamplerHandleIMG   = (PFNGLGETTEXTURESAMPLERHANDLEIMGPROC)gles2wLoad("glGetTextureSamplerHandleIMG");
    glUniformHandleui64IMG         = (PFNGLUNIFORMHANDLEUI64IMGPROC)gles2wLoad("glUniformHandleui64IMG");
    glUniformHandleui64vIMG        = (PFNGLUNIFORMHANDLEUI64VIMGPROC)gles2wLoad("glUniformHandleui64vIMG");
    glProgramUniformHandleui64IMG  = (PFNGLPROGRAMUNIFORMHANDLEUI64IMGPROC)gles2wLoad("glProgramUniformHandleui64IMG");
    glProgramUniformHandleui64vIMG = (PFNGLPROGRAMUNIFORMHANDLEUI64VIMGPROC)gles2wLoad("glProgramUniformHandleui64vIMG");
#endif /* defined(GL_IMG_bindless_texture) */

#if defined(GL_IMG_framebuffer_downsample)
    glFramebufferTexture2DDownsampleIMG    = (PFNGLFRAMEBUFFERTEXTURE2DDOWNSAMPLEIMGPROC)gles2wLoad("glFramebufferTexture2DDownsampleIMG");
    glFramebufferTextureLayerDownsampleIMG = (PFNGLFRAMEBUFFERTEXTURELAYERDOWNSAMPLEIMGPROC)gles2wLoad("glFramebufferTextureLayerDownsampleIMG");
#endif /* defined(GL_IMG_framebuffer_downsample) */

#if defined(GL_IMG_multisampled_render_to_texture)
    glRenderbufferStorageMultisampleIMG  = (PFNGLRENDERBUFFERSTORAGEMULTISAMPLEIMGPROC)gles2wLoad("glRenderbufferStorageMultisampleIMG");
    glFramebufferTexture2DMultisampleIMG = (PFNGLFRAMEBUFFERTEXTURE2DMULTISAMPLEIMGPROC)gles2wLoad("glFramebufferTexture2DMultisampleIMG");
#endif /* defined(GL_IMG_multisampled_render_to_texture) */

#if defined(GL_INTEL_framebuffer_CMAA)
    glApplyFramebufferAttachmentCMAAINTEL = (PFNGLAPPLYFRAMEBUFFERATTACHMENTCMAAINTELPROC)gles2wLoad("glApplyFramebufferAttachmentCMAAINTEL");
#endif /* defined(GL_INTEL_framebuffer_CMAA) */

#if defined(GL_INTEL_performance_query)
    glBeginPerfQueryINTEL       = (PFNGLBEGINPERFQUERYINTELPROC)gles2wLoad("glBeginPerfQueryINTEL");
    glCreatePerfQueryINTEL      = (PFNGLCREATEPERFQUERYINTELPROC)gles2wLoad("glCreatePerfQueryINTEL");
    glDeletePerfQueryINTEL      = (PFNGLDELETEPERFQUERYINTELPROC)gles2wLoad("glDeletePerfQueryINTEL");
    glEndPerfQueryINTEL         = (PFNGLENDPERFQUERYINTELPROC)gles2wLoad("glEndPerfQueryINTEL");
    glGetFirstPerfQueryIdINTEL  = (PFNGLGETFIRSTPERFQUERYIDINTELPROC)gles2wLoad("glGetFirstPerfQueryIdINTEL");
    glGetNextPerfQueryIdINTEL   = (PFNGLGETNEXTPERFQUERYIDINTELPROC)gles2wLoad("glGetNextPerfQueryIdINTEL");
    glGetPerfCounterInfoINTEL   = (PFNGLGETPERFCOUNTERINFOINTELPROC)gles2wLoad("glGetPerfCounterInfoINTEL");
    glGetPerfQueryDataINTEL     = (PFNGLGETPERFQUERYDATAINTELPROC)gles2wLoad("glGetPerfQueryDataINTEL");
    glGetPerfQueryIdByNameINTEL = (PFNGLGETPERFQUERYIDBYNAMEINTELPROC)gles2wLoad("glGetPerfQueryIdByNameINTEL");
    glGetPerfQueryInfoINTEL     = (PFNGLGETPERFQUERYINFOINTELPROC)gles2wLoad("glGetPerfQueryInfoINTEL");
#endif /* defined(GL_INTEL_performance_query) */

#if defined(GL_KHR_blend_equation_advanced)
    glBlendBarrierKHR = (PFNGLBLENDBARRIERKHRPROC)gles2wLoad("glBlendBarrierKHR");
#endif /* defined(GL_KHR_blend_equation_advanced) */

#if defined(GL_KHR_debug)
    glDebugMessageControlKHR  = (PFNGLDEBUGMESSAGECONTROLKHRPROC)gles2wLoad("glDebugMessageControlKHR");
    glDebugMessageInsertKHR   = (PFNGLDEBUGMESSAGEINSERTKHRPROC)gles2wLoad("glDebugMessageInsertKHR");
    glDebugMessageCallbackKHR = (PFNGLDEBUGMESSAGECALLBACKKHRPROC)gles2wLoad("glDebugMessageCallbackKHR");
    glGetDebugMessageLogKHR   = (PFNGLGETDEBUGMESSAGELOGKHRPROC)gles2wLoad("glGetDebugMessageLogKHR");
    glPushDebugGroupKHR       = (PFNGLPUSHDEBUGGROUPKHRPROC)gles2wLoad("glPushDebugGroupKHR");
    glPopDebugGroupKHR        = (PFNGLPOPDEBUGGROUPKHRPROC)gles2wLoad("glPopDebugGroupKHR");
    glObjectLabelKHR          = (PFNGLOBJECTLABELKHRPROC)gles2wLoad("glObjectLabelKHR");
    glGetObjectLabelKHR       = (PFNGLGETOBJECTLABELKHRPROC)gles2wLoad("glGetObjectLabelKHR");
    glObjectPtrLabelKHR       = (PFNGLOBJECTPTRLABELKHRPROC)gles2wLoad("glObjectPtrLabelKHR");
    glGetObjectPtrLabelKHR    = (PFNGLGETOBJECTPTRLABELKHRPROC)gles2wLoad("glGetObjectPtrLabelKHR");
    glGetPointervKHR          = (PFNGLGETPOINTERVKHRPROC)gles2wLoad("glGetPointervKHR");
#endif /* defined(GL_KHR_debug) */

#if defined(GL_KHR_robustness)
    glGetGraphicsResetStatusKHR = (PFNGLGETGRAPHICSRESETSTATUSKHRPROC)gles2wLoad("glGetGraphicsResetStatusKHR");
    glReadnPixelsKHR            = (PFNGLREADNPIXELSKHRPROC)gles2wLoad("glReadnPixelsKHR");
    glGetnUniformfvKHR          = (PFNGLGETNUNIFORMFVKHRPROC)gles2wLoad("glGetnUniformfvKHR");
    glGetnUniformivKHR          = (PFNGLGETNUNIFORMIVKHRPROC)gles2wLoad("glGetnUniformivKHR");
    glGetnUniformuivKHR         = (PFNGLGETNUNIFORMUIVKHRPROC)gles2wLoad("glGetnUniformuivKHR");
#endif /* defined(GL_KHR_robustness) */

#if defined(GL_KHR_parallel_shader_compile)
    glMaxShaderCompilerThreadsKHR = (PFNGLMAXSHADERCOMPILERTHREADSKHRPROC)gles2wLoad("glMaxShaderCompilerThreadsKHR");
#endif /* defined(GL_KHR_parallel_shader_compile) */

#if defined(GL_MESA_framebuffer_flip_y)
    glFramebufferParameteriMESA     = (PFNGLFRAMEBUFFERPARAMETERIMESAPROC)gles2wLoad("glFramebufferParameteriMESA");
    glGetFramebufferParameterivMESA = (PFNGLGETFRAMEBUFFERPARAMETERIVMESAPROC)gles2wLoad("glGetFramebufferParameterivMESA");
#endif /* defined(GL_MESA_framebuffer_flip_y) */

#if defined(GL_NV_bindless_texture)
    glGetTextureHandleNV             = (PFNGLGETTEXTUREHANDLENVPROC)gles2wLoad("glGetTextureHandleNV");
    glGetTextureSamplerHandleNV      = (PFNGLGETTEXTURESAMPLERHANDLENVPROC)gles2wLoad("glGetTextureSamplerHandleNV");
    glMakeTextureHandleResidentNV    = (PFNGLMAKETEXTUREHANDLERESIDENTNVPROC)gles2wLoad("glMakeTextureHandleResidentNV");
    glMakeTextureHandleNonResidentNV = (PFNGLMAKETEXTUREHANDLENONRESIDENTNVPROC)gles2wLoad("glMakeTextureHandleNonResidentNV");
    glGetImageHandleNV               = (PFNGLGETIMAGEHANDLENVPROC)gles2wLoad("glGetImageHandleNV");
    glMakeImageHandleResidentNV      = (PFNGLMAKEIMAGEHANDLERESIDENTNVPROC)gles2wLoad("glMakeImageHandleResidentNV");
    glMakeImageHandleNonResidentNV   = (PFNGLMAKEIMAGEHANDLENONRESIDENTNVPROC)gles2wLoad("glMakeImageHandleNonResidentNV");
    glUniformHandleui64NV            = (PFNGLUNIFORMHANDLEUI64NVPROC)gles2wLoad("glUniformHandleui64NV");
    glUniformHandleui64vNV           = (PFNGLUNIFORMHANDLEUI64VNVPROC)gles2wLoad("glUniformHandleui64vNV");
    glProgramUniformHandleui64NV     = (PFNGLPROGRAMUNIFORMHANDLEUI64NVPROC)gles2wLoad("glProgramUniformHandleui64NV");
    glProgramUniformHandleui64vNV    = (PFNGLPROGRAMUNIFORMHANDLEUI64VNVPROC)gles2wLoad("glProgramUniformHandleui64vNV");
    glIsTextureHandleResidentNV      = (PFNGLISTEXTUREHANDLERESIDENTNVPROC)gles2wLoad("glIsTextureHandleResidentNV");
    glIsImageHandleResidentNV        = (PFNGLISIMAGEHANDLERESIDENTNVPROC)gles2wLoad("glIsImageHandleResidentNV");
#endif /* defined(GL_NV_bindless_texture) */

#if defined(GL_NV_blend_equation_advanced)
    glBlendParameteriNV = (PFNGLBLENDPARAMETERINVPROC)gles2wLoad("glBlendParameteriNV");
    glBlendBarrierNV    = (PFNGLBLENDBARRIERNVPROC)gles2wLoad("glBlendBarrierNV");
#endif /* defined(GL_NV_blend_equation_advanced) */

#if defined(GL_NV_clip_space_w_scaling)
    glViewportPositionWScaleNV = (PFNGLVIEWPORTPOSITIONWSCALENVPROC)gles2wLoad("glViewportPositionWScaleNV");
#endif /* defined(GL_NV_clip_space_w_scaling) */

#if defined(GL_NV_conditional_render)
    glBeginConditionalRenderNV = (PFNGLBEGINCONDITIONALRENDERNVPROC)gles2wLoad("glBeginConditionalRenderNV");
    glEndConditionalRenderNV   = (PFNGLENDCONDITIONALRENDERNVPROC)gles2wLoad("glEndConditionalRenderNV");
#endif /* defined(GL_NV_conditional_render) */

#if defined(GL_NV_conservative_raster)
    glSubpixelPrecisionBiasNV = (PFNGLSUBPIXELPRECISIONBIASNVPROC)gles2wLoad("glSubpixelPrecisionBiasNV");
#endif /* defined(GL_NV_conservative_raster) */

#if defined(GL_NV_conservative_raster_pre_snap_triangles)
    glConservativeRasterParameteriNV = (PFNGLCONSERVATIVERASTERPARAMETERINVPROC)gles2wLoad("glConservativeRasterParameteriNV");
#endif /* defined(GL_NV_conservative_raster_pre_snap_triangles) */

#if defined(GL_NV_copy_buffer)
    glCopyBufferSubDataNV = (PFNGLCOPYBUFFERSUBDATANVPROC)gles2wLoad("glCopyBufferSubDataNV");
#endif /* defined(GL_NV_copy_buffer) */

#if defined(GL_NV_coverage_sample)
    glCoverageMaskNV      = (PFNGLCOVERAGEMASKNVPROC)gles2wLoad("glCoverageMaskNV");
    glCoverageOperationNV = (PFNGLCOVERAGEOPERATIONNVPROC)gles2wLoad("glCoverageOperationNV");
#endif /* defined(GL_NV_coverage_sample) */

#if defined(GL_NV_draw_buffers)
    glDrawBuffersNV = (PFNGLDRAWBUFFERSNVPROC)gles2wLoad("glDrawBuffersNV");
#endif /* defined(GL_NV_draw_buffers) */

#if defined(GL_NV_draw_instanced)
    glDrawArraysInstancedNV   = (PFNGLDRAWARRAYSINSTANCEDNVPROC)gles2wLoad("glDrawArraysInstancedNV");
    glDrawElementsInstancedNV = (PFNGLDRAWELEMENTSINSTANCEDNVPROC)gles2wLoad("glDrawElementsInstancedNV");
#endif /* defined(GL_NV_draw_instanced) */

#if defined(GL_NV_draw_vulkan_image)
    glDrawVkImageNV       = (PFNGLDRAWVKIMAGENVPROC)gles2wLoad("glDrawVkImageNV");
    glGetVkProcAddrNV     = (PFNGLGETVKPROCADDRNVPROC)gles2wLoad("glGetVkProcAddrNV");
    glWaitVkSemaphoreNV   = (PFNGLWAITVKSEMAPHORENVPROC)gles2wLoad("glWaitVkSemaphoreNV");
    glSignalVkSemaphoreNV = (PFNGLSIGNALVKSEMAPHORENVPROC)gles2wLoad("glSignalVkSemaphoreNV");
    glSignalVkFenceNV     = (PFNGLSIGNALVKFENCENVPROC)gles2wLoad("glSignalVkFenceNV");
#endif /* defined(GL_NV_draw_vulkan_image) */

#if defined(GL_NV_fence)
    glDeleteFencesNV = (PFNGLDELETEFENCESNVPROC)gles2wLoad("glDeleteFencesNV");
    glGenFencesNV    = (PFNGLGENFENCESNVPROC)gles2wLoad("glGenFencesNV");
    glIsFenceNV      = (PFNGLISFENCENVPROC)gles2wLoad("glIsFenceNV");
    glTestFenceNV    = (PFNGLTESTFENCENVPROC)gles2wLoad("glTestFenceNV");
    glGetFenceivNV   = (PFNGLGETFENCEIVNVPROC)gles2wLoad("glGetFenceivNV");
    glFinishFenceNV  = (PFNGLFINISHFENCENVPROC)gles2wLoad("glFinishFenceNV");
    glSetFenceNV     = (PFNGLSETFENCENVPROC)gles2wLoad("glSetFenceNV");
#endif /* defined(GL_NV_fence) */

#if defined(GL_NV_fragment_coverage_to_color)
    glFragmentCoverageColorNV = (PFNGLFRAGMENTCOVERAGECOLORNVPROC)gles2wLoad("glFragmentCoverageColorNV");
#endif /* defined(GL_NV_fragment_coverage_to_color) */

#if defined(GL_NV_framebuffer_blit)
    glBlitFramebufferNV = (PFNGLBLITFRAMEBUFFERNVPROC)gles2wLoad("glBlitFramebufferNV");
#endif /* defined(GL_NV_framebuffer_blit) */

#if defined(GL_NV_framebuffer_mixed_samples)
    glCoverageModulationTableNV    = (PFNGLCOVERAGEMODULATIONTABLENVPROC)gles2wLoad("glCoverageModulationTableNV");
    glGetCoverageModulationTableNV = (PFNGLGETCOVERAGEMODULATIONTABLENVPROC)gles2wLoad("glGetCoverageModulationTableNV");
    glCoverageModulationNV         = (PFNGLCOVERAGEMODULATIONNVPROC)gles2wLoad("glCoverageModulationNV");
#endif /* defined(GL_NV_framebuffer_mixed_samples) */

#if defined(GL_NV_framebuffer_multisample)
    glRenderbufferStorageMultisampleNV = (PFNGLRENDERBUFFERSTORAGEMULTISAMPLENVPROC)gles2wLoad("glRenderbufferStorageMultisampleNV");
#endif /* defined(GL_NV_framebuffer_multisample) */

#if defined(GL_NV_gpu_shader5)
    glUniform1i64NV    = (PFNGLUNIFORM1I64NVPROC)gles2wLoad("glUniform1i64NV");
    glUniform2i64NV    = (PFNGLUNIFORM2I64NVPROC)gles2wLoad("glUniform2i64NV");
    glUniform3i64NV    = (PFNGLUNIFORM3I64NVPROC)gles2wLoad("glUniform3i64NV");
    glUniform4i64NV    = (PFNGLUNIFORM4I64NVPROC)gles2wLoad("glUniform4i64NV");
    glUniform1i64vNV   = (PFNGLUNIFORM1I64VNVPROC)gles2wLoad("glUniform1i64vNV");
    glUniform2i64vNV   = (PFNGLUNIFORM2I64VNVPROC)gles2wLoad("glUniform2i64vNV");
    glUniform3i64vNV   = (PFNGLUNIFORM3I64VNVPROC)gles2wLoad("glUniform3i64vNV");
    glUniform4i64vNV   = (PFNGLUNIFORM4I64VNVPROC)gles2wLoad("glUniform4i64vNV");
    glUniform1ui64NV   = (PFNGLUNIFORM1UI64NVPROC)gles2wLoad("glUniform1ui64NV");
    glUniform2ui64NV   = (PFNGLUNIFORM2UI64NVPROC)gles2wLoad("glUniform2ui64NV");
    glUniform3ui64NV   = (PFNGLUNIFORM3UI64NVPROC)gles2wLoad("glUniform3ui64NV");
    glUniform4ui64NV   = (PFNGLUNIFORM4UI64NVPROC)gles2wLoad("glUniform4ui64NV");
    glUniform1ui64vNV  = (PFNGLUNIFORM1UI64VNVPROC)gles2wLoad("glUniform1ui64vNV");
    glUniform2ui64vNV  = (PFNGLUNIFORM2UI64VNVPROC)gles2wLoad("glUniform2ui64vNV");
    glUniform3ui64vNV  = (PFNGLUNIFORM3UI64VNVPROC)gles2wLoad("glUniform3ui64vNV");
    glUniform4ui64vNV  = (PFNGLUNIFORM4UI64VNVPROC)gles2wLoad("glUniform4ui64vNV");
    glGetUniformi64vNV = (PFNGLGETUNIFORMI64VNVPROC)gles2wLoad("glGetUniformi64vNV");

    glProgramUniform1i64NV   = (PFNGLPROGRAMUNIFORM1I64NVPROC)gles2wLoad("glProgramUniform1i64NV");
    glProgramUniform2i64NV   = (PFNGLPROGRAMUNIFORM2I64NVPROC)gles2wLoad("glProgramUniform2i64NV");
    glProgramUniform3i64NV   = (PFNGLPROGRAMUNIFORM3I64NVPROC)gles2wLoad("glProgramUniform3i64NV");
    glProgramUniform4i64NV   = (PFNGLPROGRAMUNIFORM4I64NVPROC)gles2wLoad("glProgramUniform4i64NV");
    glProgramUniform1i64vNV  = (PFNGLPROGRAMUNIFORM1I64VNVPROC)gles2wLoad("glProgramUniform1i64vNV");
    glProgramUniform2i64vNV  = (PFNGLPROGRAMUNIFORM2I64VNVPROC)gles2wLoad("glProgramUniform2i64vNV");
    glProgramUniform3i64vNV  = (PFNGLPROGRAMUNIFORM3I64VNVPROC)gles2wLoad("glProgramUniform3i64vNV");
    glProgramUniform4i64vNV  = (PFNGLPROGRAMUNIFORM4I64VNVPROC)gles2wLoad("glProgramUniform4i64vNV");
    glProgramUniform1ui64NV  = (PFNGLPROGRAMUNIFORM1UI64NVPROC)gles2wLoad("glProgramUniform1ui64NV");
    glProgramUniform2ui64NV  = (PFNGLPROGRAMUNIFORM2UI64NVPROC)gles2wLoad("glProgramUniform2ui64NV");
    glProgramUniform3ui64NV  = (PFNGLPROGRAMUNIFORM3UI64NVPROC)gles2wLoad("glProgramUniform3ui64NV");
    glProgramUniform4ui64NV  = (PFNGLPROGRAMUNIFORM4UI64NVPROC)gles2wLoad("glProgramUniform4ui64NV");
    glProgramUniform1ui64vNV = (PFNGLPROGRAMUNIFORM1UI64VNVPROC)gles2wLoad("glProgramUniform1ui64vNV");
    glProgramUniform2ui64vNV = (PFNGLPROGRAMUNIFORM2UI64VNVPROC)gles2wLoad("glProgramUniform2ui64vNV");
    glProgramUniform3ui64vNV = (PFNGLPROGRAMUNIFORM3UI64VNVPROC)gles2wLoad("glProgramUniform3ui64vNV");
    glProgramUniform4ui64vNV = (PFNGLPROGRAMUNIFORM4UI64VNVPROC)gles2wLoad("glProgramUniform4ui64vNV");
#endif /* defined(GL_NV_gpu_shader5) */

#if defined(GL_NV_instanced_arrays)
    glVertexAttribDivisorNV = (PFNGLVERTEXATTRIBDIVISORNVPROC)gles2wLoad("glVertexAttribDivisorNV");
#endif /* defined(GL_NV_instanced_arrays) */

#if defined(GL_NV_internalformat_sample_query)
    glGetInternalformatSampleivNV = (PFNGLGETINTERNALFORMATSAMPLEIVNVPROC)gles2wLoad("glGetInternalformatSampleivNV");
#endif /* defined(GL_NV_internalformat_sample_query) */

#if defined(GL_NV_memory_attachment)
    glGetMemoryObjectDetachedResourcesuivNV = (PFNGLGETMEMORYOBJECTDETACHEDRESOURCESUIVNVPROC)gles2wLoad("glGetMemoryObjectDetachedResourcesuivNV");
    glResetMemoryObjectParameterNV          = (PFNGLRESETMEMORYOBJECTPARAMETERNVPROC)gles2wLoad("glResetMemoryObjectParameterNV");
    glTexAttachMemoryNV                     = (PFNGLTEXATTACHMEMORYNVPROC)gles2wLoad("glTexAttachMemoryNV");
    glBufferAttachMemoryNV                  = (PFNGLBUFFERATTACHMEMORYNVPROC)gles2wLoad("glBufferAttachMemoryNV");

    glTextureAttachMemoryNV     = (PFNGLTEXTUREATTACHMEMORYNVPROC)gles2wLoad("glTextureAttachMemoryNV");
    glNamedBufferAttachMemoryNV = (PFNGLNAMEDBUFFERATTACHMEMORYNVPROC)gles2wLoad("glNamedBufferAttachMemoryNV");
#endif /* defined(GL_NV_memory_attachment) */

#if defined(GL_NV_memory_object_sparse)
    glBufferPageCommitmentMemNV = (PFNGLBUFFERPAGECOMMITMENTMEMNVPROC)gles2wLoad("glBufferPageCommitmentMemNV");
    glTexPageCommitmentMemNV    = (PFNGLTEXPAGECOMMITMENTMEMNVPROC)gles2wLoad("glTexPageCommitmentMemNV");

    glNamedBufferPageCommitmentMemNV = (PFNGLNAMEDBUFFERPAGECOMMITMENTMEMNVPROC)gles2wLoad("glNamedBufferPageCommitmentMemNV");
    glTexturePageCommitmentMemNV     = (PFNGLTEXTUREPAGECOMMITMENTMEMNVPROC)gles2wLoad("glTexturePageCommitmentMemNV");
#endif /* defined(GL_NV_memory_object_sparse) */

#if defined(GL_NV_mesh_shader)
    glDrawMeshTasksNV                   = (PFNGLDRAWMESHTASKSNVPROC)gles2wLoad("glDrawMeshTasksNV");
    glDrawMeshTasksIndirectNV           = (PFNGLDRAWMESHTASKSINDIRECTNVPROC)gles2wLoad("glDrawMeshTasksIndirectNV");
    glMultiDrawMeshTasksIndirectNV      = (PFNGLMULTIDRAWMESHTASKSINDIRECTNVPROC)gles2wLoad("glMultiDrawMeshTasksIndirectNV");
    glMultiDrawMeshTasksIndirectCountNV = (PFNGLMULTIDRAWMESHTASKSINDIRECTCOUNTNVPROC)gles2wLoad("glMultiDrawMeshTasksIndirectCountNV");
#endif /* defined(GL_NV_mesh_shader) */

#if defined(GL_NV_non_square_matrices)
    glUniformMatrix2x3fvNV = (PFNGLUNIFORMMATRIX2X3FVNVPROC)gles2wLoad("glUniformMatrix2x3fvNV");
    glUniformMatrix3x2fvNV = (PFNGLUNIFORMMATRIX3X2FVNVPROC)gles2wLoad("glUniformMatrix3x2fvNV");
    glUniformMatrix2x4fvNV = (PFNGLUNIFORMMATRIX2X4FVNVPROC)gles2wLoad("glUniformMatrix2x4fvNV");
    glUniformMatrix4x2fvNV = (PFNGLUNIFORMMATRIX4X2FVNVPROC)gles2wLoad("glUniformMatrix4x2fvNV");
    glUniformMatrix3x4fvNV = (PFNGLUNIFORMMATRIX3X4FVNVPROC)gles2wLoad("glUniformMatrix3x4fvNV");
    glUniformMatrix4x3fvNV = (PFNGLUNIFORMMATRIX4X3FVNVPROC)gles2wLoad("glUniformMatrix4x3fvNV");
#endif /* defined(GL_NV_non_square_matrices) */

#if defined(GL_NV_path_rendering)
    glGenPathsNV                   = (PFNGLGENPATHSNVPROC)gles2wLoad("glGenPathsNV");
    glDeletePathsNV                = (PFNGLDELETEPATHSNVPROC)gles2wLoad("glDeletePathsNV");
    glIsPathNV                     = (PFNGLISPATHNVPROC)gles2wLoad("glIsPathNV");
    glPathCommandsNV               = (PFNGLPATHCOMMANDSNVPROC)gles2wLoad("glPathCommandsNV");
    glPathCoordsNV                 = (PFNGLPATHCOORDSNVPROC)gles2wLoad("glPathCoordsNV");
    glPathSubCommandsNV            = (PFNGLPATHSUBCOMMANDSNVPROC)gles2wLoad("glPathSubCommandsNV");
    glPathSubCoordsNV              = (PFNGLPATHSUBCOORDSNVPROC)gles2wLoad("glPathSubCoordsNV");
    glPathStringNV                 = (PFNGLPATHSTRINGNVPROC)gles2wLoad("glPathStringNV");
    glPathGlyphsNV                 = (PFNGLPATHGLYPHSNVPROC)gles2wLoad("glPathGlyphsNV");
    glPathGlyphRangeNV             = (PFNGLPATHGLYPHRANGENVPROC)gles2wLoad("glPathGlyphRangeNV");
    glWeightPathsNV                = (PFNGLWEIGHTPATHSNVPROC)gles2wLoad("glWeightPathsNV");
    glCopyPathNV                   = (PFNGLCOPYPATHNVPROC)gles2wLoad("glCopyPathNV");
    glInterpolatePathsNV           = (PFNGLINTERPOLATEPATHSNVPROC)gles2wLoad("glInterpolatePathsNV");
    glTransformPathNV              = (PFNGLTRANSFORMPATHNVPROC)gles2wLoad("glTransformPathNV");
    glPathParameterivNV            = (PFNGLPATHPARAMETERIVNVPROC)gles2wLoad("glPathParameterivNV");
    glPathParameteriNV             = (PFNGLPATHPARAMETERINVPROC)gles2wLoad("glPathParameteriNV");
    glPathParameterfvNV            = (PFNGLPATHPARAMETERFVNVPROC)gles2wLoad("glPathParameterfvNV");
    glPathParameterfNV             = (PFNGLPATHPARAMETERFNVPROC)gles2wLoad("glPathParameterfNV");
    glPathDashArrayNV              = (PFNGLPATHDASHARRAYNVPROC)gles2wLoad("glPathDashArrayNV");
    glPathStencilFuncNV            = (PFNGLPATHSTENCILFUNCNVPROC)gles2wLoad("glPathStencilFuncNV");
    glPathStencilDepthOffsetNV     = (PFNGLPATHSTENCILDEPTHOFFSETNVPROC)gles2wLoad("glPathStencilDepthOffsetNV");
    glStencilFillPathNV            = (PFNGLSTENCILFILLPATHNVPROC)gles2wLoad("glStencilFillPathNV");
    glStencilStrokePathNV          = (PFNGLSTENCILSTROKEPATHNVPROC)gles2wLoad("glStencilStrokePathNV");
    glStencilFillPathInstancedNV   = (PFNGLSTENCILFILLPATHINSTANCEDNVPROC)gles2wLoad("glStencilFillPathInstancedNV");
    glStencilStrokePathInstancedNV = (PFNGLSTENCILSTROKEPATHINSTANCEDNVPROC)gles2wLoad("glStencilStrokePathInstancedNV");
    glPathCoverDepthFuncNV         = (PFNGLPATHCOVERDEPTHFUNCNVPROC)gles2wLoad("glPathCoverDepthFuncNV");
    glCoverFillPathNV              = (PFNGLCOVERFILLPATHNVPROC)gles2wLoad("glCoverFillPathNV");
    glCoverStrokePathNV            = (PFNGLCOVERSTROKEPATHNVPROC)gles2wLoad("glCoverStrokePathNV");
    glCoverFillPathInstancedNV     = (PFNGLCOVERFILLPATHINSTANCEDNVPROC)gles2wLoad("glCoverFillPathInstancedNV");
    glCoverStrokePathInstancedNV   = (PFNGLCOVERSTROKEPATHINSTANCEDNVPROC)gles2wLoad("glCoverStrokePathInstancedNV");
    glGetPathParameterivNV         = (PFNGLGETPATHPARAMETERIVNVPROC)gles2wLoad("glGetPathParameterivNV");
    glGetPathParameterfvNV         = (PFNGLGETPATHPARAMETERFVNVPROC)gles2wLoad("glGetPathParameterfvNV");
    glGetPathCommandsNV            = (PFNGLGETPATHCOMMANDSNVPROC)gles2wLoad("glGetPathCommandsNV");
    glGetPathCoordsNV              = (PFNGLGETPATHCOORDSNVPROC)gles2wLoad("glGetPathCoordsNV");
    glGetPathDashArrayNV           = (PFNGLGETPATHDASHARRAYNVPROC)gles2wLoad("glGetPathDashArrayNV");
    glGetPathMetricsNV             = (PFNGLGETPATHMETRICSNVPROC)gles2wLoad("glGetPathMetricsNV");
    glGetPathMetricRangeNV         = (PFNGLGETPATHMETRICRANGENVPROC)gles2wLoad("glGetPathMetricRangeNV");
    glGetPathSpacingNV             = (PFNGLGETPATHSPACINGNVPROC)gles2wLoad("glGetPathSpacingNV");
    glIsPointInFillPathNV          = (PFNGLISPOINTINFILLPATHNVPROC)gles2wLoad("glIsPointInFillPathNV");
    glIsPointInStrokePathNV        = (PFNGLISPOINTINSTROKEPATHNVPROC)gles2wLoad("glIsPointInStrokePathNV");
    glGetPathLengthNV              = (PFNGLGETPATHLENGTHNVPROC)gles2wLoad("glGetPathLengthNV");
    glPointAlongPathNV             = (PFNGLPOINTALONGPATHNVPROC)gles2wLoad("glPointAlongPathNV");

    glMatrixLoad3x2fNV                      = (PFNGLMATRIXLOAD3X2FNVPROC)gles2wLoad("glMatrixLoad3x2fNV");
    glMatrixLoad3x3fNV                      = (PFNGLMATRIXLOAD3X3FNVPROC)gles2wLoad("glMatrixLoad3x3fNV");
    glMatrixLoadTranspose3x3fNV             = (PFNGLMATRIXLOADTRANSPOSE3X3FNVPROC)gles2wLoad("glMatrixLoadTranspose3x3fNV");
    glMatrixMult3x2fNV                      = (PFNGLMATRIXMULT3X2FNVPROC)gles2wLoad("glMatrixMult3x2fNV");
    glMatrixMult3x3fNV                      = (PFNGLMATRIXMULT3X3FNVPROC)gles2wLoad("glMatrixMult3x3fNV");
    glMatrixMultTranspose3x3fNV             = (PFNGLMATRIXMULTTRANSPOSE3X3FNVPROC)gles2wLoad("glMatrixMultTranspose3x3fNV");
    glStencilThenCoverFillPathNV            = (PFNGLSTENCILTHENCOVERFILLPATHNVPROC)gles2wLoad("glStencilThenCoverFillPathNV");
    glStencilThenCoverStrokePathNV          = (PFNGLSTENCILTHENCOVERSTROKEPATHNVPROC)gles2wLoad("glStencilThenCoverStrokePathNV");
    glStencilThenCoverFillPathInstancedNV   = (PFNGLSTENCILTHENCOVERFILLPATHINSTANCEDNVPROC)gles2wLoad("glStencilThenCoverFillPathInstancedNV");
    glStencilThenCoverStrokePathInstancedNV = (PFNGLSTENCILTHENCOVERSTROKEPATHINSTANCEDNVPROC)gles2wLoad("glStencilThenCoverStrokePathInstancedNV");
    glPathGlyphIndexRangeNV                 = (PFNGLPATHGLYPHINDEXRANGENVPROC)gles2wLoad("glPathGlyphIndexRangeNV");

    glPathGlyphIndexArrayNV         = (PFNGLPATHGLYPHINDEXARRAYNVPROC)gles2wLoad("glPathGlyphIndexArrayNV");
    glPathMemoryGlyphIndexArrayNV   = (PFNGLPATHMEMORYGLYPHINDEXARRAYNVPROC)gles2wLoad("glPathMemoryGlyphIndexArrayNV");
    glProgramPathFragmentInputGenNV = (PFNGLPROGRAMPATHFRAGMENTINPUTGENNVPROC)gles2wLoad("glProgramPathFragmentInputGenNV");
    glGetProgramResourcefvNV        = (PFNGLGETPROGRAMRESOURCEFVNVPROC)gles2wLoad("glGetProgramResourcefvNV");

    glMatrixFrustumEXT        = (PFNGLMATRIXFRUSTUMEXTPROC)gles2wLoad("glMatrixFrustumEXT");
    glMatrixLoadIdentityEXT   = (PFNGLMATRIXLOADIDENTITYEXTPROC)gles2wLoad("glMatrixLoadIdentityEXT");
    glMatrixLoadTransposefEXT = (PFNGLMATRIXLOADTRANSPOSEFEXTPROC)gles2wLoad("glMatrixLoadTransposefEXT");
    glMatrixLoadTransposedEXT = (PFNGLMATRIXLOADTRANSPOSEDEXTPROC)gles2wLoad("glMatrixLoadTransposedEXT");
    glMatrixLoadfEXT          = (PFNGLMATRIXLOADFEXTPROC)gles2wLoad("glMatrixLoadfEXT");
    glMatrixLoaddEXT          = (PFNGLMATRIXLOADDEXTPROC)gles2wLoad("glMatrixLoaddEXT");
    glMatrixMultTransposefEXT = (PFNGLMATRIXMULTTRANSPOSEFEXTPROC)gles2wLoad("glMatrixMultTransposefEXT");
    glMatrixMultTransposedEXT = (PFNGLMATRIXMULTTRANSPOSEDEXTPROC)gles2wLoad("glMatrixMultTransposedEXT");
    glMatrixMultfEXT          = (PFNGLMATRIXMULTFEXTPROC)gles2wLoad("glMatrixMultfEXT");
    glMatrixMultdEXT          = (PFNGLMATRIXMULTDEXTPROC)gles2wLoad("glMatrixMultdEXT");
    glMatrixOrthoEXT          = (PFNGLMATRIXORTHOEXTPROC)gles2wLoad("glMatrixOrthoEXT");
    glMatrixPopEXT            = (PFNGLMATRIXPOPEXTPROC)gles2wLoad("glMatrixPopEXT");
    glMatrixPushEXT           = (PFNGLMATRIXPUSHEXTPROC)gles2wLoad("glMatrixPushEXT");
    glMatrixRotatefEXT        = (PFNGLMATRIXROTATEFEXTPROC)gles2wLoad("glMatrixRotatefEXT");
    glMatrixRotatedEXT        = (PFNGLMATRIXROTATEDEXTPROC)gles2wLoad("glMatrixRotatedEXT");
    glMatrixScalefEXT         = (PFNGLMATRIXSCALEFEXTPROC)gles2wLoad("glMatrixScalefEXT");
    glMatrixScaledEXT         = (PFNGLMATRIXSCALEDEXTPROC)gles2wLoad("glMatrixScaledEXT");
    glMatrixTranslatefEXT     = (PFNGLMATRIXTRANSLATEFEXTPROC)gles2wLoad("glMatrixTranslatefEXT");
    glMatrixTranslatedEXT     = (PFNGLMATRIXTRANSLATEDEXTPROC)gles2wLoad("glMatrixTranslatedEXT");
#endif /* defined(GL_NV_path_rendering) */

#if defined(GL_NV_polygon_mode)
    glPolygonModeNV = (PFNGLPOLYGONMODENVPROC)gles2wLoad("glPolygonModeNV");
#endif /* defined(GL_NV_polygon_mode) */

#if defined(GL_NV_read_buffer)
    glReadBufferNV = (PFNGLREADBUFFERNVPROC)gles2wLoad("glReadBufferNV");
#endif /* defined(GL_NV_read_buffer) */

#if defined(GL_NV_sample_locations)
    glFramebufferSampleLocationsfvNV      = (PFNGLFRAMEBUFFERSAMPLELOCATIONSFVNVPROC)gles2wLoad("glFramebufferSampleLocationsfvNV");
    glNamedFramebufferSampleLocationsfvNV = (PFNGLNAMEDFRAMEBUFFERSAMPLELOCATIONSFVNVPROC)gles2wLoad("glNamedFramebufferSampleLocationsfvNV");
    glResolveDepthValuesNV                = (PFNGLRESOLVEDEPTHVALUESNVPROC)gles2wLoad("glResolveDepthValuesNV");
#endif /* defined(GL_NV_sample_locations) */

#if defined(GL_NV_scissor_exclusive)
    glScissorExclusiveNV       = (PFNGLSCISSOREXCLUSIVENVPROC)gles2wLoad("glScissorExclusiveNV");
    glScissorExclusiveArrayvNV = (PFNGLSCISSOREXCLUSIVEARRAYVNVPROC)gles2wLoad("glScissorExclusiveArrayvNV");
#endif /* defined(GL_NV_scissor_exclusive) */

#if defined(GL_NV_shading_rate_image)
    glBindShadingRateImageNV           = (PFNGLBINDSHADINGRATEIMAGENVPROC)gles2wLoad("glBindShadingRateImageNV");
    glGetShadingRateImagePaletteNV     = (PFNGLGETSHADINGRATEIMAGEPALETTENVPROC)gles2wLoad("glGetShadingRateImagePaletteNV");
    glGetShadingRateSampleLocationivNV = (PFNGLGETSHADINGRATESAMPLELOCATIONIVNVPROC)gles2wLoad("glGetShadingRateSampleLocationivNV");
    glShadingRateImageBarrierNV        = (PFNGLSHADINGRATEIMAGEBARRIERNVPROC)gles2wLoad("glShadingRateImageBarrierNV");
    glShadingRateImagePaletteNV        = (PFNGLSHADINGRATEIMAGEPALETTENVPROC)gles2wLoad("glShadingRateImagePaletteNV");
    glShadingRateSampleOrderNV         = (PFNGLSHADINGRATESAMPLEORDERNVPROC)gles2wLoad("glShadingRateSampleOrderNV");
    glShadingRateSampleOrderCustomNV   = (PFNGLSHADINGRATESAMPLEORDERCUSTOMNVPROC)gles2wLoad("glShadingRateSampleOrderCustomNV");
#endif /* defined(GL_NV_shading_rate_image) */

#if defined(GL_NV_viewport_array)
    glViewportArrayvNV     = (PFNGLVIEWPORTARRAYVNVPROC)gles2wLoad("glViewportArrayvNV");
    glViewportIndexedfNV   = (PFNGLVIEWPORTINDEXEDFNVPROC)gles2wLoad("glViewportIndexedfNV");
    glViewportIndexedfvNV  = (PFNGLVIEWPORTINDEXEDFVNVPROC)gles2wLoad("glViewportIndexedfvNV");
    glScissorArrayvNV      = (PFNGLSCISSORARRAYVNVPROC)gles2wLoad("glScissorArrayvNV");
    glScissorIndexedNV     = (PFNGLSCISSORINDEXEDNVPROC)gles2wLoad("glScissorIndexedNV");
    glScissorIndexedvNV    = (PFNGLSCISSORINDEXEDVNVPROC)gles2wLoad("glScissorIndexedvNV");
    glDepthRangeArrayfvNV  = (PFNGLDEPTHRANGEARRAYFVNVPROC)gles2wLoad("glDepthRangeArrayfvNV");
    glDepthRangeIndexedfNV = (PFNGLDEPTHRANGEINDEXEDFNVPROC)gles2wLoad("glDepthRangeIndexedfNV");
    glGetFloati_vNV        = (PFNGLGETFLOATI_VNVPROC)gles2wLoad("glGetFloati_vNV");
    glEnableiNV            = (PFNGLENABLEINVPROC)gles2wLoad("glEnableiNV");
    glDisableiNV           = (PFNGLDISABLEINVPROC)gles2wLoad("glDisableiNV");
    glIsEnablediNV         = (PFNGLISENABLEDINVPROC)gles2wLoad("glIsEnablediNV");
#endif /* defined(GL_NV_viewport_array) */

#if defined(GL_NV_viewport_swizzle)
    glViewportSwizzleNV = (PFNGLVIEWPORTSWIZZLENVPROC)gles2wLoad("glViewportSwizzleNV");
#endif /* defined(GL_NV_viewport_swizzle) */

#if defined(GL_OES_EGL_image)
    glEGLImageTargetTexture2DOES           = (PFNGLEGLIMAGETARGETTEXTURE2DOESPROC)gles2wLoad("glEGLImageTargetTexture2DOES");
    glEGLImageTargetRenderbufferStorageOES = (PFNGLEGLIMAGETARGETRENDERBUFFERSTORAGEOESPROC)gles2wLoad("glEGLImageTargetRenderbufferStorageOES");
#endif /* defined(GL_OES_EGL_image) */

#if defined(GL_OES_copy_image)
    glCopyImageSubDataOES = (PFNGLCOPYIMAGESUBDATAOESPROC)gles2wLoad("glCopyImageSubDataOES");
#endif /* defined(GL_OES_copy_image) */

#if defined(GL_OES_draw_buffers_indexed)
    glEnableiOES                = (PFNGLENABLEIOESPROC)gles2wLoad("glEnableiOES");
    glDisableiOES               = (PFNGLDISABLEIOESPROC)gles2wLoad("glDisableiOES");
    glBlendEquationiOES         = (PFNGLBLENDEQUATIONIOESPROC)gles2wLoad("glBlendEquationiOES");
    glBlendEquationSeparateiOES = (PFNGLBLENDEQUATIONSEPARATEIOESPROC)gles2wLoad("glBlendEquationSeparateiOES");
    glBlendFunciOES             = (PFNGLBLENDFUNCIOESPROC)gles2wLoad("glBlendFunciOES");
    glBlendFuncSeparateiOES     = (PFNGLBLENDFUNCSEPARATEIOESPROC)gles2wLoad("glBlendFuncSeparateiOES");
    glColorMaskiOES             = (PFNGLCOLORMASKIOESPROC)gles2wLoad("glColorMaskiOES");
    glIsEnablediOES             = (PFNGLISENABLEDIOESPROC)gles2wLoad("glIsEnablediOES");
#endif /* defined(GL_OES_draw_buffers_indexed) */

#if defined(GL_OES_draw_elements_base_vertex)
    glDrawElementsBaseVertexOES          = (PFNGLDRAWELEMENTSBASEVERTEXOESPROC)gles2wLoad("glDrawElementsBaseVertexOES");
    glDrawRangeElementsBaseVertexOES     = (PFNGLDRAWRANGEELEMENTSBASEVERTEXOESPROC)gles2wLoad("glDrawRangeElementsBaseVertexOES");
    glDrawElementsInstancedBaseVertexOES = (PFNGLDRAWELEMENTSINSTANCEDBASEVERTEXOESPROC)gles2wLoad("glDrawElementsInstancedBaseVertexOES");
#endif /* defined(GL_OES_draw_elements_base_vertex) */

#if defined(GL_OES_geometry_shader)
    glFramebufferTextureOES = (PFNGLFRAMEBUFFERTEXTUREOESPROC)gles2wLoad("glFramebufferTextureOES");
#endif /* defined(GL_OES_geometry_shader) */

#if defined(GL_OES_get_program_binary)
    glGetProgramBinaryOES = (PFNGLGETPROGRAMBINARYOESPROC)gles2wLoad("glGetProgramBinaryOES");
    glProgramBinaryOES    = (PFNGLPROGRAMBINARYOESPROC)gles2wLoad("glProgramBinaryOES");
#endif /* defined(GL_OES_get_program_binary) */

#if defined(GL_OES_mapbuffer)
    glMapBufferOES         = (PFNGLMAPBUFFEROESPROC)gles2wLoad("glMapBufferOES");
    glUnmapBufferOES       = (PFNGLUNMAPBUFFEROESPROC)gles2wLoad("glUnmapBufferOES");
    glGetBufferPointervOES = (PFNGLGETBUFFERPOINTERVOESPROC)gles2wLoad("glGetBufferPointervOES");
#endif /* defined(GL_OES_mapbuffer) */

#if defined(GL_OES_primitive_bounding_box)
    glPrimitiveBoundingBoxOES = (PFNGLPRIMITIVEBOUNDINGBOXOESPROC)gles2wLoad("glPrimitiveBoundingBoxOES");
#endif /* defined(GL_OES_primitive_bounding_box) */

#if defined(GL_OES_sample_shading)
    glMinSampleShadingOES = (PFNGLMINSAMPLESHADINGOESPROC)gles2wLoad("glMinSampleShadingOES");
#endif /* defined(GL_OES_sample_shading) */

#if defined(GL_OES_tessellation_shader)
    glPatchParameteriOES = (PFNGLPATCHPARAMETERIOESPROC)gles2wLoad("glPatchParameteriOES");
#endif /* defined(GL_OES_tessellation_shader) */

#if defined(GL_OES_texture_3D)
    glTexImage3DOES              = (PFNGLTEXIMAGE3DOESPROC)gles2wLoad("glTexImage3DOES");
    glTexSubImage3DOES           = (PFNGLTEXSUBIMAGE3DOESPROC)gles2wLoad("glTexSubImage3DOES");
    glCopyTexSubImage3DOES       = (PFNGLCOPYTEXSUBIMAGE3DOESPROC)gles2wLoad("glCopyTexSubImage3DOES");
    glCompressedTexImage3DOES    = (PFNGLCOMPRESSEDTEXIMAGE3DOESPROC)gles2wLoad("glCompressedTexImage3DOES");
    glCompressedTexSubImage3DOES = (PFNGLCOMPRESSEDTEXSUBIMAGE3DOESPROC)gles2wLoad("glCompressedTexSubImage3DOES");
    glFramebufferTexture3DOES    = (PFNGLFRAMEBUFFERTEXTURE3DOESPROC)gles2wLoad("glFramebufferTexture3DOES");
#endif /* defined(GL_OES_texture_3D) */

#if defined(GL_OES_texture_border_clamp)
    glTexParameterIivOES         = (PFNGLTEXPARAMETERIIVOESPROC)gles2wLoad("glTexParameterIivOES");
    glTexParameterIuivOES        = (PFNGLTEXPARAMETERIUIVOESPROC)gles2wLoad("glTexParameterIuivOES");
    glGetTexParameterIivOES      = (PFNGLGETTEXPARAMETERIIVOESPROC)gles2wLoad("glGetTexParameterIivOES");
    glGetTexParameterIuivOES     = (PFNGLGETTEXPARAMETERIUIVOESPROC)gles2wLoad("glGetTexParameterIuivOES");
    glSamplerParameterIivOES     = (PFNGLSAMPLERPARAMETERIIVOESPROC)gles2wLoad("glSamplerParameterIivOES");
    glSamplerParameterIuivOES    = (PFNGLSAMPLERPARAMETERIUIVOESPROC)gles2wLoad("glSamplerParameterIuivOES");
    glGetSamplerParameterIivOES  = (PFNGLGETSAMPLERPARAMETERIIVOESPROC)gles2wLoad("glGetSamplerParameterIivOES");
    glGetSamplerParameterIuivOES = (PFNGLGETSAMPLERPARAMETERIUIVOESPROC)gles2wLoad("glGetSamplerParameterIuivOES");
#endif /* defined(GL_OES_texture_border_clamp) */

#if defined(GL_OES_texture_buffer)
    glTexBufferOES      = (PFNGLTEXBUFFEROESPROC)gles2wLoad("glTexBufferOES");
    glTexBufferRangeOES = (PFNGLTEXBUFFERRANGEOESPROC)gles2wLoad("glTexBufferRangeOES");
#endif /* defined(GL_OES_texture_buffer) */

#if defined(GL_OES_texture_storage_multisample_2d_array)
    glTexStorage3DMultisampleOES = (PFNGLTEXSTORAGE3DMULTISAMPLEOESPROC)gles2wLoad("glTexStorage3DMultisampleOES");
#endif /* defined(GL_OES_texture_storage_multisample_2d_array) */

#if defined(GL_OES_texture_view)
    glTextureViewOES = (PFNGLTEXTUREVIEWOESPROC)gles2wLoad("glTextureViewOES");
#endif /* defined(GL_OES_texture_view) */

#if defined(GL_OES_vertex_array_object)
    glBindVertexArrayOES    = (PFNGLBINDVERTEXARRAYOESPROC)gles2wLoad("glBindVertexArrayOES");
    glDeleteVertexArraysOES = (PFNGLDELETEVERTEXARRAYSOESPROC)gles2wLoad("glDeleteVertexArraysOES");
    glGenVertexArraysOES    = (PFNGLGENVERTEXARRAYSOESPROC)gles2wLoad("glGenVertexArraysOES");
    glIsVertexArrayOES      = (PFNGLISVERTEXARRAYOESPROC)gles2wLoad("glIsVertexArrayOES");
#endif /* defined(GL_OES_vertex_array_object) */

#if defined(GL_OES_viewport_array)
    glViewportArrayvOES     = (PFNGLVIEWPORTARRAYVOESPROC)gles2wLoad("glViewportArrayvOES");
    glViewportIndexedfOES   = (PFNGLVIEWPORTINDEXEDFOESPROC)gles2wLoad("glViewportIndexedfOES");
    glViewportIndexedfvOES  = (PFNGLVIEWPORTINDEXEDFVOESPROC)gles2wLoad("glViewportIndexedfvOES");
    glScissorArrayvOES      = (PFNGLSCISSORARRAYVOESPROC)gles2wLoad("glScissorArrayvOES");
    glScissorIndexedOES     = (PFNGLSCISSORINDEXEDOESPROC)gles2wLoad("glScissorIndexedOES");
    glScissorIndexedvOES    = (PFNGLSCISSORINDEXEDVOESPROC)gles2wLoad("glScissorIndexedvOES");
    glDepthRangeArrayfvOES  = (PFNGLDEPTHRANGEARRAYFVOESPROC)gles2wLoad("glDepthRangeArrayfvOES");
    glDepthRangeIndexedfOES = (PFNGLDEPTHRANGEINDEXEDFOESPROC)gles2wLoad("glDepthRangeIndexedfOES");
    glGetFloati_vOES        = (PFNGLGETFLOATI_VOESPROC)gles2wLoad("glGetFloati_vOES");
#endif /* defined(GL_OES_viewport_array) */

#if defined(GL_OVR_multiview)
    glFramebufferTextureMultiviewOVR = (PFNGLFRAMEBUFFERTEXTUREMULTIVIEWOVRPROC)gles2wLoad("glFramebufferTextureMultiviewOVR");
#endif /* defined(GL_OVR_multiview) */

#if defined(GL_OVR_multiview_multisampled_render_to_texture)
    glFramebufferTextureMultisampleMultiviewOVR = (PFNGLFRAMEBUFFERTEXTUREMULTISAMPLEMULTIVIEWOVRPROC)gles2wLoad("glFramebufferTextureMultisampleMultiviewOVR");
#endif /* defined(GL_OVR_multiview_multisampled_render_to_texture) */

#if defined(GL_QCOM_alpha_test)
    glAlphaFuncQCOM = (PFNGLALPHAFUNCQCOMPROC)gles2wLoad("glAlphaFuncQCOM");
#endif /* defined(GL_QCOM_alpha_test) */

#if defined(GL_QCOM_driver_control)
    glGetDriverControlsQCOM      = (PFNGLGETDRIVERCONTROLSQCOMPROC)gles2wLoad("glGetDriverControlsQCOM");
    glGetDriverControlStringQCOM = (PFNGLGETDRIVERCONTROLSTRINGQCOMPROC)gles2wLoad("glGetDriverControlStringQCOM");
    glEnableDriverControlQCOM    = (PFNGLENABLEDRIVERCONTROLQCOMPROC)gles2wLoad("glEnableDriverControlQCOM");
    glDisableDriverControlQCOM   = (PFNGLDISABLEDRIVERCONTROLQCOMPROC)gles2wLoad("glDisableDriverControlQCOM");
#endif /* defined(GL_QCOM_driver_control) */

#if defined(GL_QCOM_extended_get)
    glExtGetTexturesQCOM             = (PFNGLEXTGETTEXTURESQCOMPROC)gles2wLoad("glExtGetTexturesQCOM");
    glExtGetBuffersQCOM              = (PFNGLEXTGETBUFFERSQCOMPROC)gles2wLoad("glExtGetBuffersQCOM");
    glExtGetRenderbuffersQCOM        = (PFNGLEXTGETRENDERBUFFERSQCOMPROC)gles2wLoad("glExtGetRenderbuffersQCOM");
    glExtGetFramebuffersQCOM         = (PFNGLEXTGETFRAMEBUFFERSQCOMPROC)gles2wLoad("glExtGetFramebuffersQCOM");
    glExtGetTexLevelParameterivQCOM  = (PFNGLEXTGETTEXLEVELPARAMETERIVQCOMPROC)gles2wLoad("glExtGetTexLevelParameterivQCOM");
    glExtTexObjectStateOverrideiQCOM = (PFNGLEXTTEXOBJECTSTATEOVERRIDEIQCOMPROC)gles2wLoad("glExtTexObjectStateOverrideiQCOM");
    glExtGetTexSubImageQCOM          = (PFNGLEXTGETTEXSUBIMAGEQCOMPROC)gles2wLoad("glExtGetTexSubImageQCOM");
    glExtGetBufferPointervQCOM       = (PFNGLEXTGETBUFFERPOINTERVQCOMPROC)gles2wLoad("glExtGetBufferPointervQCOM");
#endif /* defined(GL_QCOM_extended_get) */

#if defined(GL_QCOM_extended_get2)
    glExtGetShadersQCOM             = (PFNGLEXTGETSHADERSQCOMPROC)gles2wLoad("glExtGetShadersQCOM");
    glExtGetProgramsQCOM            = (PFNGLEXTGETPROGRAMSQCOMPROC)gles2wLoad("glExtGetProgramsQCOM");
    glExtIsProgramBinaryQCOM        = (PFNGLEXTISPROGRAMBINARYQCOMPROC)gles2wLoad("glExtIsProgramBinaryQCOM");
    glExtGetProgramBinarySourceQCOM = (PFNGLEXTGETPROGRAMBINARYSOURCEQCOMPROC)gles2wLoad("glExtGetProgramBinarySourceQCOM");
#endif /* defined(GL_QCOM_extended_get2) */

#if defined(GL_QCOM_framebuffer_foveated)
    glFramebufferFoveationConfigQCOM     = (PFNGLFRAMEBUFFERFOVEATIONCONFIGQCOMPROC)gles2wLoad("glFramebufferFoveationConfigQCOM");
    glFramebufferFoveationParametersQCOM = (PFNGLFRAMEBUFFERFOVEATIONPARAMETERSQCOMPROC)gles2wLoad("glFramebufferFoveationParametersQCOM");
#endif /* defined(GL_QCOM_framebuffer_foveated) */

#if defined(GL_QCOM_motion_estimation)
    glTexEstimateMotionQCOM        = (PFNGLTEXESTIMATEMOTIONQCOMPROC)gles2wLoad("glTexEstimateMotionQCOM");
    glTexEstimateMotionRegionsQCOM = (PFNGLTEXESTIMATEMOTIONREGIONSQCOMPROC)gles2wLoad("glTexEstimateMotionRegionsQCOM");
#endif /* defined(GL_QCOM_motion_estimation) */

#if defined(GL_QCOM_frame_extrapolation)
    glExtrapolateTex2DQCOM = (PFNGLEXTRAPOLATETEX2DQCOMPROC)gles2wLoad("glExtrapolateTex2DQCOM");
#endif /* defined(GL_QCOM_frame_extrapolation) */

#if defined(GL_QCOM_texture_foveated)
    glTextureFoveationParametersQCOM = (PFNGLTEXTUREFOVEATIONPARAMETERSQCOMPROC)gles2wLoad("glTextureFoveationParametersQCOM");
#endif /* defined(GL_QCOM_texture_foveated) */

#if defined(GL_QCOM_shader_framebuffer_fetch_noncoherent)
    glFramebufferFetchBarrierQCOM = (PFNGLFRAMEBUFFERFETCHBARRIERQCOMPROC)gles2wLoad("glFramebufferFetchBarrierQCOM");
#endif /* defined(GL_QCOM_shader_framebuffer_fetch_noncoherent) */

#if defined(GL_QCOM_shading_rate)
    glShadingRateQCOM = (PFNGLSHADINGRATEQCOMPROC)gles2wLoad("glShadingRateQCOM");
#endif /* defined(GL_QCOM_shading_rate) */

#if defined(GL_QCOM_tiled_rendering)
    glStartTilingQCOM = (PFNGLSTARTTILINGQCOMPROC)gles2wLoad("glStartTilingQCOM");
    glEndTilingQCOM   = (PFNGLENDTILINGQCOMPROC)gles2wLoad("glEndTilingQCOM");
#endif /* defined(GL_QCOM_tiled_rendering) */

    /* GLES2W_GENERATE_GLES_LOAD */

    /**
     * ========================= !DO NOT CHANGE THE ABOVE SECTION MANUALLY! =========================
     * The above section is auto-generated from GLES spec by running:
     * node tools/gles-wrangler-generator/generate.js
     * ========================= !DO NOT CHANGE THE ABOVE SECTION MANUALLY! =========================
     */
}
