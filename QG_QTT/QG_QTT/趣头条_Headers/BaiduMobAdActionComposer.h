//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "BaiduMobAdSFDelegate-Protocol.h"
#import "BaiduMobAdWebLPControllerDelegate-Protocol.h"
#import "MFMailComposeViewControllerDelegate-Protocol.h"
#import "MFMessageComposeViewControllerDelegate-Protocol.h"
#import "SFSafariViewControllerDelegate-Protocol.h"
#import "SKStoreProductViewControllerDelegate-Protocol.h"
#import "UIViewControllerTransitioningDelegate-Protocol.h"

@class BaiduMobAdInstance, BaiduMobAdLPTransitionAnimation, BaiduMobAdSFViewController, NSDictionary, NSString, UIViewController, UIWindow;
@protocol BaiduMobAdActionComposerDelegate;

@interface BaiduMobAdActionComposer : NSObject <SFSafariViewControllerDelegate, BaiduMobAdSFDelegate, MFMailComposeViewControllerDelegate, MFMessageComposeViewControllerDelegate, SKStoreProductViewControllerDelegate, BaiduMobAdWebLPControllerDelegate, UIViewControllerTransitioningDelegate>
{
    id _handlerImpl;
    int _state;
    UIViewController *_innerADController;
    UIWindow *_userCurrentWindow;
    UIWindow *_innerADWindow;
    _Bool _supportVideoLP;
    _Bool _sfDidDismissed;
    _Bool _leaveAppOnce;
    _Bool _isAppActive;
    _Bool _isFinish;
    int _type;
    id <BaiduMobAdActionComposerDelegate> _delegate;
    NSDictionary *_actionOption;
    BaiduMobAdLPTransitionAnimation *_animation;
    BaiduMobAdInstance *_instance;
    double _lpStartTime;
    double _lpLoadTime;
    double _duration;
    double _lpWebStartLoad;
    double _lpWebFinishLoad;
    BaiduMobAdSFViewController *_sfViewController;
}

+ (void)setActionUrl:(id)arg1 dumpar:(_Bool)arg2 delegate:(id)arg3;
+ (_Bool)composerSupportType:(int)arg1;
+ (_Bool)canSMS;
+ (_Bool)canMail;
+ (_Bool)canMap;
+ (id)composerWithType:(int)arg1 delegate:(id)arg2;
@property(nonatomic) _Bool isFinish; // @synthesize isFinish=_isFinish;
@property(nonatomic) _Bool isAppActive; // @synthesize isAppActive=_isAppActive;
@property(nonatomic) _Bool leaveAppOnce; // @synthesize leaveAppOnce=_leaveAppOnce;
@property(nonatomic) _Bool sfDidDismissed; // @synthesize sfDidDismissed=_sfDidDismissed;
@property(retain, nonatomic) BaiduMobAdSFViewController *sfViewController; // @synthesize sfViewController=_sfViewController;
@property(nonatomic) double lpWebFinishLoad; // @synthesize lpWebFinishLoad=_lpWebFinishLoad;
@property(nonatomic) double lpWebStartLoad; // @synthesize lpWebStartLoad=_lpWebStartLoad;
@property(nonatomic) double duration; // @synthesize duration=_duration;
@property(nonatomic) double lpLoadTime; // @synthesize lpLoadTime=_lpLoadTime;
@property(nonatomic) double lpStartTime; // @synthesize lpStartTime=_lpStartTime;
@property(retain, nonatomic) BaiduMobAdInstance *instance; // @synthesize instance=_instance;
@property(nonatomic) _Bool supportVideoLP; // @synthesize supportVideoLP=_supportVideoLP;
@property(retain, nonatomic) BaiduMobAdLPTransitionAnimation *animation; // @synthesize animation=_animation;
@property(retain, nonatomic) NSDictionary *actionOption; // @synthesize actionOption=_actionOption;
@property(retain, nonatomic) UIWindow *userCurrentWindow; // @synthesize userCurrentWindow=_userCurrentWindow;
@property(nonatomic) __weak id <BaiduMobAdActionComposerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) int Type; // @synthesize Type=_type;
- (void).cxx_destruct;
- (void)productViewControllerDidFinish:(id)arg1;
- (void)dismissLater:(id)arg1;
- (void)dismissVC:(id)arg1;
- (void)webLPController:(id)arg1 didFinishWithResult:(id)arg2;
- (void)mailComposeController:(id)arg1 didFinishWithResult:(long long)arg2 error:(id)arg3;
- (void)messageComposeViewController:(id)arg1 didFinishWithResult:(long long)arg2;
- (void)dealloc;
- (_Bool)doAction:(id)arg1 withParam:(id)arg2;
- (id)animationControllerForDismissedController:(id)arg1;
- (id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3;
- (void)sendLPMonitorLogURL:(id)arg1 logType:(id)arg2 dictionary:(id)arg3;
- (void)buildAndSendType39LogUrl;
- (void)useSafariViewControllerToOpenUrl:(id)arg1 inNavigationController:(id)arg2;
- (void)didScrollToSwipeBack;
- (void)dismissSFOnce:(_Bool)arg1;
- (void)actionComposerCheckActiveState:(id)arg1;
- (void)safariViewController:(id)arg1 didCompleteInitialLoad:(_Bool)arg2;
- (void)safariViewControllerDidFinish:(id)arg1;
- (void)internal_presentLpControllerWithNavigationController:(id)arg1 withParam:(id)arg2;
- (_Bool)innerDoActionDL:(id)arg1 withParam:(id)arg2;
- (_Bool)innerDoActionLP:(id)arg1 withParam:(id)arg2;
- (void)sendAPOLogURL:(_Bool)arg1 scheme:(id)arg2;
- (_Bool)innerDoActionAPO:(id)arg1 withParam:(id)arg2;
- (_Bool)innerDoAction:(id)arg1 withParam:(id)arg2;
- (void)didFinish:(id)arg1 error:(_Bool)arg2;
- (id)initWithType:(int)arg1 delegate:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

