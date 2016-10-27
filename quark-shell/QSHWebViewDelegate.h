//
//  QSHWebViewDelegate.h
//  quark-shell
//
//  Created by Xhacker Liu on 3/31/14.
//  Copyright (c) 2014 Xhacker. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <WebKit/WebKit.h>
#import "QSHStatusItemView.h"
#import "QSHAppDelegate.h"
#import "QSHWebView.h"

@interface QSHWebViewDelegate : NSObject <WKNavigationDelegate, WKUIDelegate>

@property (nonatomic, weak) QSHAppDelegate *appDelegate;
@property (nonatomic, weak) NSStatusItem *statusItem;
@property (nonatomic, weak) QSHStatusItemView *statusItemView;
@property (nonatomic, weak) QSHWebView *webView;

+ (BOOL)isSelectorExcludedFromWebScript:(SEL)selector;

+ (void)initWebviewWithBridge:(QSHWebView*)webview url:(NSURL*)url webDelegate:(QSHWebViewDelegate*)webDelegate;

- (void)changeIcon:(NSArray *)args;

@end
