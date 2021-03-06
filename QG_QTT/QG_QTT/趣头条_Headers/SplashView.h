//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIImageView.h>

@class QKAdsNativeAdObject, SplashModel;
@protocol SplashViewDelegate;

@interface SplashView : UIImageView
{
    id <SplashViewDelegate> _delegate;
    UIImageView *_foreView;
    SplashModel *_splash;
    QKAdsNativeAdObject *_adObject;
}

+ (id)cachedImage:(id)arg1 prefetch:(_Bool)arg2;
+ (void)showInView:(id)arg1 src:(int)arg2 delegate:(id)arg3;
+ (id)splashOpen;
@property(retain, nonatomic) QKAdsNativeAdObject *adObject; // @synthesize adObject=_adObject;
@property(retain, nonatomic) SplashModel *splash; // @synthesize splash=_splash;
@property(retain, nonatomic) UIImageView *foreView; // @synthesize foreView=_foreView;
@property(nonatomic) __weak id <SplashViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)setupJump:(long long)arg1;
- (void)didNativeAdClick;
- (void)didLaunchClick;
- (void)didSplashClick;
- (void)dismiss;
- (void)showSplashAInsplashView;

@end

