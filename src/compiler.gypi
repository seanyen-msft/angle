# Copyright (c) 2013 The ANGLE Project Authors. All rights reserved.
# Use of this source code is governed by a BSD-style license that can be
# found in the LICENSE file.

{
    'variables':
    {
        # These file lists are shared with the GN build.
        'angle_translator_sources':
        [
            '../include/EGL/egl.h',
            '../include/EGL/eglext.h',
            '../include/EGL/eglplatform.h',
            '../include/GLES2/gl2.h',
            '../include/GLES2/gl2ext.h',
            '../include/GLES2/gl2platform.h',
            '../include/GLES3/gl3.h',
            '../include/GLES3/gl3platform.h',
            '../include/GLES3/gl31.h',
            '../include/GLES3/gl32.h',
            '../include/GLSLANG/ShaderLang.h',
            '../include/GLSLANG/ShaderVars.h',
            '../include/KHR/khrplatform.h',
            '../include/angle_gl.h',
            'compiler/translator/AddAndTrueToLoopCondition.cpp',
            'compiler/translator/AddAndTrueToLoopCondition.h',
            'compiler/translator/BaseTypes.h',
            'compiler/translator/BuiltInFunctionEmulator.cpp',
            'compiler/translator/BuiltInFunctionEmulator.h',
            'compiler/translator/BreakVariableAliasingInInnerLoops.cpp',
            'compiler/translator/BreakVariableAliasingInInnerLoops.h',
            'compiler/translator/Cache.cpp',
            'compiler/translator/Cache.h',
            'compiler/translator/CallDAG.cpp',
            'compiler/translator/CallDAG.h',
            'compiler/translator/ClampPointSize.cpp',
            'compiler/translator/ClampPointSize.h',
            'compiler/translator/CodeGen.cpp',
            'compiler/translator/CollectVariables.cpp',
            'compiler/translator/CollectVariables.h',
            'compiler/translator/Common.h',
            'compiler/translator/Compiler.cpp',
            'compiler/translator/Compiler.h',
            'compiler/translator/ConstantUnion.cpp',
            'compiler/translator/ConstantUnion.h',
            'compiler/translator/DeclareAndInitBuiltinsForInstancedMultiview.h',
            'compiler/translator/DeclareAndInitBuiltinsForInstancedMultiview.cpp',
            'compiler/translator/DeferGlobalInitializers.cpp',
            'compiler/translator/DeferGlobalInitializers.h',
            'compiler/translator/Diagnostics.cpp',
            'compiler/translator/Diagnostics.h',
            'compiler/translator/DirectiveHandler.cpp',
            'compiler/translator/DirectiveHandler.h',
            'compiler/translator/EmulateGLFragColorBroadcast.cpp',
            'compiler/translator/EmulateGLFragColorBroadcast.h',
            'compiler/translator/EmulatePrecision.cpp',
            'compiler/translator/EmulatePrecision.h',
            'compiler/translator/ExpandIntegerPowExpressions.cpp',
            'compiler/translator/ExpandIntegerPowExpressions.h',
            'compiler/translator/ExtensionBehavior.cpp',
            'compiler/translator/ExtensionBehavior.h',
            'compiler/translator/FindMain.cpp',
            'compiler/translator/FindMain.h',
            'compiler/translator/FindSymbolNode.cpp',
            'compiler/translator/FindSymbolNode.h',
            'compiler/translator/FlagStd140Structs.cpp',
            'compiler/translator/FlagStd140Structs.h',
            'compiler/translator/HashNames.cpp',
            'compiler/translator/HashNames.h',
            'compiler/translator/InfoSink.cpp',
            'compiler/translator/InfoSink.h',
            'compiler/translator/Initialize.cpp',
            'compiler/translator/Initialize.h',
            'compiler/translator/InitializeDll.cpp',
            'compiler/translator/InitializeDll.h',
            'compiler/translator/InitializeGlobals.h',
            'compiler/translator/InitializeVariables.cpp',
            'compiler/translator/InitializeVariables.h',
            'compiler/translator/IntermNode.h',
            'compiler/translator/IntermNode.cpp',
            'compiler/translator/IntermNodePatternMatcher.cpp',
            'compiler/translator/IntermNodePatternMatcher.h',
            'compiler/translator/IntermNode_util.cpp',
            'compiler/translator/IntermNode_util.h',
            'compiler/translator/IntermTraverse.cpp',
            'compiler/translator/IntermTraverse.h',
            'compiler/translator/IsASTDepthBelowLimit.cpp',
            'compiler/translator/IsASTDepthBelowLimit.h',
            'compiler/translator/NodeSearch.h',
            'compiler/translator/Operator.cpp',
            'compiler/translator/Operator.h',
            'compiler/translator/OutputTree.cpp',
            'compiler/translator/OutputTree.h',
            'compiler/translator/ParamType.h',
            'compiler/translator/ParseContext.cpp',
            'compiler/translator/ParseContext.h',
            'compiler/translator/PoolAlloc.cpp',
            'compiler/translator/PoolAlloc.h',
            'compiler/translator/Pragma.h',
            'compiler/translator/PruneNoOps.cpp',
            'compiler/translator/PruneNoOps.h',
            'compiler/translator/QualifierTypes.h',
            'compiler/translator/QualifierTypes.cpp',
            'compiler/translator/RecordConstantPrecision.cpp',
            'compiler/translator/RecordConstantPrecision.h',
            'compiler/translator/RegenerateStructNames.cpp',
            'compiler/translator/RegenerateStructNames.h',
            'compiler/translator/RemoveArrayLengthMethod.cpp',
            'compiler/translator/RemoveArrayLengthMethod.h',
            'compiler/translator/RemoveInvariantDeclaration.cpp',
            'compiler/translator/RemoveInvariantDeclaration.h',
            'compiler/translator/RemoveNoOpCasesFromEndOfSwitchStatements.cpp',
            'compiler/translator/RemoveNoOpCasesFromEndOfSwitchStatements.h',
            'compiler/translator/RemovePow.cpp',
            'compiler/translator/RemovePow.h',
            'compiler/translator/RewriteDoWhile.cpp',
            'compiler/translator/RewriteDoWhile.h',
            'compiler/translator/RewriteTexelFetchOffset.cpp',
            'compiler/translator/RewriteTexelFetchOffset.h',
            'compiler/translator/RewriteUnaryMinusOperatorFloat.cpp',
            'compiler/translator/RewriteUnaryMinusOperatorFloat.h',
            'compiler/translator/RewriteUnaryMinusOperatorInt.cpp',
            'compiler/translator/RewriteUnaryMinusOperatorInt.h',
            'compiler/translator/RunAtTheEndOfShader.cpp',
            'compiler/translator/RunAtTheEndOfShader.h',
            'compiler/translator/ScalarizeVecAndMatConstructorArgs.cpp',
            'compiler/translator/ScalarizeVecAndMatConstructorArgs.h',
            'compiler/translator/SearchSymbol.cpp',
            'compiler/translator/SearchSymbol.h',
            'compiler/translator/SeparateDeclarations.cpp',
            'compiler/translator/SeparateDeclarations.h',
            'compiler/translator/Severity.h',
            'compiler/translator/ShaderLang.cpp',
            'compiler/translator/ShaderVars.cpp',
            'compiler/translator/SimplifyLoopConditions.cpp',
            'compiler/translator/SimplifyLoopConditions.h',
            'compiler/translator/SplitSequenceOperator.cpp',
            'compiler/translator/SplitSequenceOperator.h',
            'compiler/translator/SymbolTable.cpp',
            'compiler/translator/SymbolTable.h',
            'compiler/translator/SymbolUniqueId.cpp',
            'compiler/translator/SymbolUniqueId.h',
            'compiler/translator/Types.cpp',
            'compiler/translator/Types.h',
            'compiler/translator/UnfoldShortCircuitAST.cpp',
            'compiler/translator/UnfoldShortCircuitAST.h',
            'compiler/translator/UseInterfaceBlockFields.cpp',
            'compiler/translator/UseInterfaceBlockFields.h',
            'compiler/translator/ValidateGlobalInitializer.cpp',
            'compiler/translator/ValidateGlobalInitializer.h',
            'compiler/translator/ValidateLimitations.cpp',
            'compiler/translator/ValidateLimitations.h',
            'compiler/translator/ValidateMaxParameters.h',
            'compiler/translator/ValidateMaxParameters.cpp',
            'compiler/translator/ValidateOutputs.cpp',
            'compiler/translator/ValidateOutputs.h',
            'compiler/translator/ValidateSwitch.cpp',
            'compiler/translator/ValidateSwitch.h',
            'compiler/translator/ValidateVaryingLocations.cpp',
            'compiler/translator/ValidateVaryingLocations.h',
            'compiler/translator/VariablePacker.cpp',
            'compiler/translator/VariablePacker.h',
            'compiler/translator/blocklayout.cpp',
            'compiler/translator/blocklayout.h',
            'compiler/translator/glslang.h',
            'compiler/translator/glslang.l',
            'compiler/translator/glslang.y',
            'compiler/translator/glslang_lex.cpp',
            'compiler/translator/glslang_tab.cpp',
            'compiler/translator/glslang_tab.h',
            'compiler/translator/length_limits.h',
            'compiler/translator/util.cpp',
            'compiler/translator/util.h',
            'third_party/compiler/ArrayBoundsClamper.cpp',
            'third_party/compiler/ArrayBoundsClamper.h',
        ],
        'angle_translator_essl_sources':
        [
            'compiler/translator/OutputESSL.cpp',
            'compiler/translator/OutputESSL.h',
            'compiler/translator/TranslatorESSL.cpp',
            'compiler/translator/TranslatorESSL.h',
        ],
        'angle_translator_glsl_sources':
        [
            'compiler/translator/BuiltInFunctionEmulatorGLSL.cpp',
            'compiler/translator/BuiltInFunctionEmulatorGLSL.h',
            'compiler/translator/ExtensionGLSL.cpp',
            'compiler/translator/ExtensionGLSL.h',
            'compiler/translator/OutputGLSL.cpp',
            'compiler/translator/OutputGLSL.h',
            'compiler/translator/OutputGLSLBase.cpp',
            'compiler/translator/OutputGLSLBase.h',
            'compiler/translator/TranslatorGLSL.cpp',
            'compiler/translator/TranslatorGLSL.h',
            'compiler/translator/VersionGLSL.cpp',
            'compiler/translator/VersionGLSL.h',
        ],
        'angle_translator_hlsl_sources':
        [
            'compiler/translator/AddDefaultReturnStatements.cpp',
            'compiler/translator/AddDefaultReturnStatements.h',
            'compiler/translator/ArrayReturnValueToOutParameter.cpp',
            'compiler/translator/ArrayReturnValueToOutParameter.h',
            'compiler/translator/ASTMetadataHLSL.cpp',
            'compiler/translator/ASTMetadataHLSL.h',
            'compiler/translator/blocklayoutHLSL.cpp',
            'compiler/translator/blocklayoutHLSL.h',
            'compiler/translator/BuiltInFunctionEmulatorHLSL.cpp',
            'compiler/translator/BuiltInFunctionEmulatorHLSL.h',
            'compiler/translator/OutputHLSL.cpp',
            'compiler/translator/OutputHLSL.h',
            'compiler/translator/RemoveDynamicIndexing.cpp',
            'compiler/translator/RemoveDynamicIndexing.h',
            'compiler/translator/RemoveSwitchFallThrough.cpp',
            'compiler/translator/RemoveSwitchFallThrough.h',
            'compiler/translator/RewriteElseBlocks.cpp',
            'compiler/translator/RewriteElseBlocks.h',
            'compiler/translator/SeparateArrayInitialization.cpp',
            'compiler/translator/SeparateArrayInitialization.h',
            'compiler/translator/SeparateExpressionsReturningArrays.cpp',
            'compiler/translator/SeparateExpressionsReturningArrays.h',
            'compiler/translator/StructureHLSL.cpp',
            'compiler/translator/StructureHLSL.h',
            'compiler/translator/TextureFunctionHLSL.cpp',
            'compiler/translator/TextureFunctionHLSL.h',
            'compiler/translator/ImageFunctionHLSL.cpp',
            'compiler/translator/ImageFunctionHLSL.h',
            'compiler/translator/TranslatorHLSL.cpp',
            'compiler/translator/TranslatorHLSL.h',
            'compiler/translator/UnfoldShortCircuitToIf.cpp',
            'compiler/translator/UnfoldShortCircuitToIf.h',
            'compiler/translator/UniformHLSL.cpp',
            'compiler/translator/UniformHLSL.h',
            'compiler/translator/UtilsHLSL.cpp',
            'compiler/translator/UtilsHLSL.h',
            'compiler/translator/WrapSwitchStatementsInBlocks.cpp',
            'compiler/translator/WrapSwitchStatementsInBlocks.h',
            'compiler/translator/emulated_builtin_functions_hlsl_autogen.cpp',
        ],
        'angle_translator_lib_vulkan_sources':
        [
            'compiler/translator/OutputVulkanGLSL.cpp',
            'compiler/translator/OutputVulkanGLSL.h',
            'compiler/translator/TranslatorVulkan.cpp',
            'compiler/translator/TranslatorVulkan.h',
        ],
        'angle_preprocessor_sources':
        [
            'compiler/preprocessor/DiagnosticsBase.cpp',
            'compiler/preprocessor/DiagnosticsBase.h',
            'compiler/preprocessor/DirectiveHandlerBase.cpp',
            'compiler/preprocessor/DirectiveHandlerBase.h',
            'compiler/preprocessor/DirectiveParser.cpp',
            'compiler/preprocessor/DirectiveParser.h',
            'compiler/preprocessor/ExpressionParser.cpp',
            'compiler/preprocessor/ExpressionParser.h',
            'compiler/preprocessor/ExpressionParser.y',
            'compiler/preprocessor/Input.cpp',
            'compiler/preprocessor/Input.h',
            'compiler/preprocessor/Lexer.cpp',
            'compiler/preprocessor/Lexer.h',
            'compiler/preprocessor/Macro.cpp',
            'compiler/preprocessor/Macro.h',
            'compiler/preprocessor/MacroExpander.cpp',
            'compiler/preprocessor/MacroExpander.h',
            'compiler/preprocessor/Preprocessor.cpp',
            'compiler/preprocessor/Preprocessor.h',
            'compiler/preprocessor/SourceLocation.h',
            'compiler/preprocessor/Token.cpp',
            'compiler/preprocessor/Token.h',
            'compiler/preprocessor/Tokenizer.cpp',
            'compiler/preprocessor/Tokenizer.h',
            'compiler/preprocessor/Tokenizer.l',
            'compiler/preprocessor/numeric_lex.h',
        ],
    },
    # Everything below this is duplicated in the GN build. If you change
    # anything also change angle/BUILD.gn
    'targets':
    [
        {
            'target_name': 'preprocessor',
            'type': 'static_library',
            'dependencies': [ 'angle_common' ],
            'includes': [ '../gyp/common_defines.gypi', ],
            'sources': [ '<@(angle_preprocessor_sources)', ],
        },
        {
            'target_name': 'translator',
            'type': 'static_library',
            'dependencies': [ 'preprocessor', 'angle_common' ],
            'includes': [ '../gyp/common_defines.gypi', ],
            'include_dirs':
            [
                '.',
                '../include',
            ],
            'sources':
            [
                '<@(angle_translator_sources)',
            ],
            'msvs_settings':
            {
              'VCLibrarianTool':
              {
                'AdditionalOptions': ['/ignore:4221']
              },
            },
            'conditions':
            [
                ['angle_enable_essl==1',
                {
                    'defines':
                    [
                        'ANGLE_ENABLE_ESSL',
                    ],
                    'direct_dependent_settings':
                    {
                        'defines':
                        [
                            'ANGLE_ENABLE_ESSL',
                        ],
                    },
                    'sources':
                    [
                        '<@(angle_translator_essl_sources)',
                    ],
                }],
                ['angle_enable_glsl==1',
                {
                    'defines':
                    [
                        'ANGLE_ENABLE_GLSL',
                    ],
                    'direct_dependent_settings':
                    {
                        'defines':
                        [
                            'ANGLE_ENABLE_GLSL',
                        ],
                    },
                    'sources':
                    [
                        '<@(angle_translator_glsl_sources)',
                    ],
                }],
                ['angle_enable_hlsl==1',
                {
                    'defines':
                    [
                        'ANGLE_ENABLE_HLSL',
                    ],
                    'direct_dependent_settings':
                    {
                        'defines':
                        [
                            'ANGLE_ENABLE_HLSL',
                        ],
                    },
                    'sources':
                    [
                        '<@(angle_translator_hlsl_sources)',
                    ],
                }],
                ['angle_enable_vulkan==1',
                {
                    'defines':
                    [
                        'ANGLE_ENABLE_VULKAN',
                    ],
                    'direct_dependent_settings':
                    {
                        'defines':
                        [
                            'ANGLE_ENABLE_VULKAN',
                        ],
                    },
                    'sources':
                    [
                        '<@(angle_translator_lib_vulkan_sources)',
                    ],
                }],
            ],
        },
    ],
}
