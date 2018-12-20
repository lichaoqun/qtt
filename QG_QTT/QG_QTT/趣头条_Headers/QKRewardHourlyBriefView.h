//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class QKButton, UIImageView, UILabel;

@interface QKRewardHourlyBriefView : UIView
{
    UIView *_overlay;
    UIView *_contentView;
    UIImageView *_headerImageView;
    UIView *_mainView;
    UILabel *_titleLabel;
    UILabel *_msgLabel;
    QKButton *_confirmBtn;
}

@property(retain, nonatomic) QKButton *confirmBtn; // @synthesize confirmBtn=_confirmBtn;
@property(retain, nonatomic) UILabel *msgLabel; // @synthesize msgLabel=_msgLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIView *mainView; // @synthesize mainView=_mainView;
@property(retain, nonatomic) UIImageView *headerImageView; // @synthesize headerImageView=_headerImageView;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(retain, nonatomic) UIView *overlay; // @synthesize overlay=_overlay;
- (void).cxx_destruct;
- (void)dismiss;
- (void)show;
- (void)closeBtnClicked:(id)arg1;
- (void)overlayTapped:(id)arg1;
- (void)initSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

