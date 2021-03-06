//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <WebKit/WKWebView.h>

#import "WKUIDelegate-Protocol.h"

@class NSDictionary, NSMutableArray, NSMutableDictionary, NSString, UITextField;
@protocol WKUIDelegate;

@interface DWKWebView : WKWebView <WKUIDelegate>
{
    CDUnknownBlockType alertHandler;
    CDUnknownBlockType confirmHandler;
    CDUnknownBlockType promptHandler;
    CDUnknownBlockType javascriptCloseWindowListener;
    int dialogType;
    int callId;
    _Bool jsDialogBlock;
    NSMutableDictionary *javaScriptNamespaceInterfaces;
    NSMutableDictionary *handerMap;
    NSMutableArray *callInfoList;
    NSDictionary *dialogTextDic;
    UITextField *txtName;
    unsigned long long lastCallTime;
    NSString *jsCache;
    _Bool isPending;
    _Bool isDebug;
    id <WKUIDelegate> _DSUIDelegate;
}

@property(nonatomic) __weak id <WKUIDelegate> DSUIDelegate; // @synthesize DSUIDelegate=_DSUIDelegate;
- (void).cxx_destruct;
- (void)hasJavascriptMethod:(id)arg1 methodExistCallback:(CDUnknownBlockType)arg2;
- (void)disableJavascriptDialogBlock:(_Bool)arg1;
- (id)dsinit:(id)arg1;
- (id)returnValue:(id)arg1;
- (id)closePage:(id)arg1;
- (_Bool)hasNativeMethod:(id)arg1;
- (id)onMessage:(id)arg1 type:(int)arg2;
- (void)customJavascriptDialogLabelTitles:(id)arg1;
- (id)javascriptObjectForKey:(id)arg1;
- (void)removeJavascriptObject:(id)arg1;
- (void)addJavascriptObject:(id)arg1 namespace:(id)arg2;
- (void)dispatchJavascriptCall:(id)arg1;
- (void)dispatchStartupQueue;
- (void)callHandler:(id)arg1 arguments:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)callHandler:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)callHandler:(id)arg1 arguments:(id)arg2;
- (void)loadUrl:(id)arg1;
- (void)setDebugMode:(_Bool)arg1;
- (void)setJavascriptCloseWindowListener:(CDUnknownBlockType)arg1;
- (id)call:(id)arg1:(id)arg2;
- (void)evalJavascript:(int)arg1;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)webView:(id)arg1 commitPreviewingViewController:(id)arg2;
- (id)webView:(id)arg1 previewingViewControllerForElement:(id)arg2 defaultActions:(id)arg3;
- (_Bool)webView:(id)arg1 shouldPreviewElement:(id)arg2;
- (void)webViewDidClose:(id)arg1;
- (id)webView:(id)arg1 createWebViewWithConfiguration:(id)arg2 forNavigationAction:(id)arg3 windowFeatures:(id)arg4;
- (void)webView:(id)arg1 runJavaScriptConfirmPanelWithMessage:(id)arg2 initiatedByFrame:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)webView:(id)arg1 runJavaScriptAlertPanelWithMessage:(id)arg2 initiatedByFrame:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)webView:(id)arg1 runJavaScriptTextInputPanelWithPrompt:(id)arg2 defaultText:(id)arg3 initiatedByFrame:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (id)initWithFrame:(struct CGRect)arg1 configuration:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

