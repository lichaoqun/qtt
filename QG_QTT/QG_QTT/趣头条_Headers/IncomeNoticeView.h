//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIButton, UIImageView, UILabel;

@interface IncomeNoticeView : UIView
{
    _Bool _isClosed;
    CDUnknownBlockType _incomeNoticeHide;
    UIView *_bgView;
    UIImageView *_iconView;
    UIButton *_closeButton;
    UILabel *_label;
}

@property(nonatomic) _Bool isClosed; // @synthesize isClosed=_isClosed;
@property(retain, nonatomic) UILabel *label; // @synthesize label=_label;
@property(retain, nonatomic) UIButton *closeButton; // @synthesize closeButton=_closeButton;
@property(retain, nonatomic) UIImageView *iconView; // @synthesize iconView=_iconView;
@property(retain, nonatomic) UIView *bgView; // @synthesize bgView=_bgView;
@property(copy, nonatomic) CDUnknownBlockType incomeNoticeHide; // @synthesize incomeNoticeHide=_incomeNoticeHide;
- (void).cxx_destruct;
- (void)resetIncomeNoticeMemberData;
- (void)removeStage;
- (void)saveStage:(long long)arg1;
- (_Bool)isNoneStage:(long long)arg1;
- (void)removeTodayShowState;
- (void)saveTodayShowState;
- (void)saveDate:(id)arg1;
- (void)resetData;
- (void)setLabelText:(id)arg1;
- (void)removeView;
- (void)hideIncomeNoticeViewWithDelay:(_Bool)arg1;
- (void)hide;
- (void)showWithPageType:(long long)arg1;
- (void)hideView;
- (void)showView;
- (void)onClickCloseButton:(id)arg1;
- (void)setupUI;
- (void)showWithData:(id)arg1 type:(long long)arg2 isShow:(CDUnknownBlockType)arg3;
- (void)showWithData:(id)arg1 type:(long long)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

@end

