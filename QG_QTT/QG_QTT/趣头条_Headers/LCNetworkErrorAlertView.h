//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIButton, UIControl, UIImageView;

@interface LCNetworkErrorAlertView : UIView
{
    UIControl *_overlayView;
    UIImageView *_bgImgView;
    UIButton *_settingBtn;
    UIButton *_cancelBtn;
}

@property(retain, nonatomic) UIButton *cancelBtn; // @synthesize cancelBtn=_cancelBtn;
@property(retain, nonatomic) UIButton *settingBtn; // @synthesize settingBtn=_settingBtn;
@property(retain, nonatomic) UIImageView *bgImgView; // @synthesize bgImgView=_bgImgView;
@property(retain, nonatomic) UIControl *overlayView; // @synthesize overlayView=_overlayView;
- (void).cxx_destruct;
- (void)cancelBtnPressed;
- (void)settingBtnPressed;
- (void)dismissWithNoAnimation;
- (void)dismiss;
- (void)show;
- (void)setupUI;
- (void)dealloc;
- (id)init;

@end

