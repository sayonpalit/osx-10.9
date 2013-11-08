/*
 * Copyright (C) 2009, 2010 Apple Inc. All Rights Reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 * 1. Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in the
 *    documentation and/or other materials provided with the distribution.
 *
 * THIS SOFTWARE IS PROVIDED BY APPLE INC. ``AS IS'' AND ANY
 * EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR
 * PURPOSE ARE DISCLAIMED.  IN NO EVENT SHALL APPLE INC. OR
 * CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL,
 * EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO,
 * PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR
 * PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY
 * OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
 * (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
 * OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE. 
 */

// This all-in-one cpp file cuts down on template bloat to allow us to build our Windows release build.

#include "ArrayValue.cpp"
#include "BindingState.cpp"
#include "CallbackFunction.cpp"
#include "DOMObjectHashTableMap.cpp"
#include "DOMWrapperWorld.cpp"
#include "Dictionary.cpp"
#include "GCController.cpp"
#include "JSArrayBufferCustom.cpp"
#include "JSAttrCustom.cpp"
#include "JSAudioTrackCustom.cpp"
#include "JSAudioTrackListCustom.cpp"
#include "JSBlobCustom.cpp"
#include "JSCDATASectionCustom.cpp"
#include "JSCSSFontFaceRuleCustom.cpp"
#include "JSCSSImportRuleCustom.cpp"
#include "JSCSSMediaRuleCustom.cpp"
#include "JSCSSPageRuleCustom.cpp"
#include "JSCSSRuleCustom.cpp"
#include "JSCSSRuleListCustom.cpp"
#include "JSCSSStyleDeclarationCustom.cpp"
#include "JSCSSStyleRuleCustom.cpp"
#include "JSCSSValueCustom.cpp"
#include "JSCallbackData.cpp"
#include "JSCanvasRenderingContext2DCustom.cpp"
#include "JSCanvasRenderingContextCustom.cpp"
#include "JSClipboardCustom.cpp"
#include "JSConsoleCustom.cpp"
#include "JSCryptoCustom.cpp"
#include "JSCustomSQLStatementErrorCallback.cpp"
#include "JSCustomXPathNSResolver.cpp"
#include "JSDictionary.cpp"
#include "JSDOMBinding.cpp"
#include "JSDOMFormDataCustom.cpp"
#include "JSDOMGlobalObject.cpp"
#include "JSDOMImplementationCustom.cpp"
#include "JSDOMMimeTypeArrayCustom.cpp"
#include "JSDOMPluginArrayCustom.cpp"
#include "JSDOMPluginCustom.cpp"
#include "JSDOMStringListCustom.cpp"
#include "JSDOMStringMapCustom.cpp"
#include "JSDOMTokenListCustom.cpp"
#include "JSDOMWindowBase.cpp"
#include "JSDOMWindowCustom.cpp"
#include "JSDOMWindowShell.cpp"
#include "JSDOMWrapper.cpp"
#include "JSDataViewCustom.cpp"
#include "JSDedicatedWorkerContextCustom.cpp"
#include "JSDeviceOrientationEventCustom.cpp"
#include "JSDocumentCustom.cpp"
#include "JSElementCustom.cpp"
#include "JSErrorHandler.cpp"
#include "JSEventCustom.cpp"
#include "JSEventListener.cpp"
#include "JSEventTargetCustom.cpp"
#include "JSExceptionBase.cpp"
#include "JSGeolocationCustom.cpp"
#include "JSHTMLAllCollectionCustom.cpp"
#include "JSHTMLAppletElementCustom.cpp"
#include "JSHTMLCanvasElementCustom.cpp"
#include "JSHTMLCollectionCustom.cpp"
#include "JSHTMLDocumentCustom.cpp"
#include "JSHTMLElementCustom.cpp"
#include "JSHTMLEmbedElementCustom.cpp"
#include "JSHTMLFormControlsCollectionCustom.cpp"
#include "JSHTMLFormElementCustom.cpp"
#include "JSHTMLFrameElementCustom.cpp"
#include "JSHTMLFrameSetElementCustom.cpp"
#include "JSHTMLInputElementCustom.cpp"
#include "JSHTMLLinkElementCustom.cpp"
#include "JSHTMLMediaElementCustom.cpp"
#include "JSHTMLObjectElementCustom.cpp"
#include "JSHTMLOptionsCollectionCustom.cpp"
#include "JSHTMLSelectElementCustom.cpp"
#include "JSHTMLStyleElementCustom.cpp"
#include "JSHTMLTemplateElementCustom.cpp"
#include "JSHistoryCustom.cpp"
#include "JSImageConstructor.cpp"
#include "JSImageDataCustom.cpp"
#include "JSInjectedScriptHostCustom.cpp"
#include "JSInjectedScriptManager.cpp"
#include "JSInspectorFrontendHostCustom.cpp"
#include "JSJavaScriptCallFrameCustom.cpp"
#include "JSLazyEventListener.cpp"
#include "JSLocationCustom.cpp"
#include "JSMainThreadExecState.cpp"
#include "JSMediaListCustom.cpp"
#include "JSMessageChannelCustom.cpp"
#include "JSMessageEventCustom.cpp"
#include "JSMessagePortCustom.cpp"
#include "JSMicroDataItemValueCustom.cpp"
#include "JSMutationCallback.cpp"
#include "JSMutationObserverCustom.cpp"
#include "JSNamedNodeMapCustom.cpp"
#include "JSNodeCustom.cpp"
#include "JSNodeFilterCondition.cpp"
#include "JSNodeFilterCustom.cpp"
#include "JSNodeIteratorCustom.cpp"
#include "JSNodeListCustom.cpp"
#include "JSPluginElementFunctions.cpp"
#include "JSPopStateEventCustom.cpp"
#include "JSProcessingInstructionCustom.cpp"
#include "JSRequestAnimationFrameCallbackCustom.cpp"
#include "JSSQLResultSetRowListCustom.cpp"
#include "JSSQLTransactionCustom.cpp"
#include "JSSQLTransactionSyncCustom.cpp"
#include "JSSVGElementInstanceCustom.cpp"
#include "JSSVGLengthCustom.cpp"
#include "JSSVGPathSegCustom.cpp"
#include "JSSharedWorkerCustom.cpp"
#include "JSStorageCustom.cpp"
#include "JSStyleSheetCustom.cpp"
#include "JSStyleSheetListCustom.cpp"
#include "JSTextCustom.cpp"
#include "JSTextTrackCueCustom.cpp"
#include "JSTextTrackCustom.cpp"
#include "JSTextTrackListCustom.cpp"
#include "JSTouchCustom.cpp"
#include "JSTouchListCustom.cpp"
#include "JSTrackCustom.cpp"
#include "JSTrackEventCustom.cpp"
#include "JSTreeWalkerCustom.cpp"
#include "JSVideoTrackCustom.cpp"
#include "JSVideoTrackListCustom.cpp"
#include "JSWebKitCSSKeyframeRuleCustom.cpp"
#include "JSWebKitCSSKeyframesRuleCustom.cpp"
#include "JSWebKitPointCustom.cpp"
#include "JSWorkerContextBase.cpp"
#include "JSWorkerContextCustom.cpp"
#include "JSWorkerCustom.cpp"
#include "JSXMLHttpRequestCustom.cpp"
#include "JSXMLHttpRequestUploadCustom.cpp"
#include "JSXPathResultCustom.cpp"
#include "JSXSLTProcessorCustom.cpp"
#include "JavaScriptCallFrame.cpp"
#include "PageScriptDebugServer.cpp"
#include "ScheduledAction.cpp"
#include "ScriptCachedFrameData.cpp"
#include "ScriptCallStackFactory.cpp"
#include "ScriptController.cpp"
#include "ScriptDebugServer.cpp"
#include "ScriptEventListener.cpp"
#include "ScriptFunctionCall.cpp"
#include "ScriptGCEvent.cpp"
#include "ScriptProfiler.cpp"
#include "ScriptState.cpp"
#include "SerializedScriptValue.cpp"
#include "WorkerScriptController.cpp"
#include "WorkerScriptDebugServer.cpp"
