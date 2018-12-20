//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSString, UIButton, UIImageView, UILabel;

@interface QKPlayerExceptionView : UIView
{
    int _type;
    UIButton *_clickBtn;
    CDUnknownBlockType _backBtnClickBlock;
    UIView *_contentView;
    UIImageView *_iconImageView;
    UILabel *_titleLabel;
    UIImageView *_bgImageView;
    UIButton *_backBtn;
    NSString *_curMsg;
}

+ (id)playerExceptionView;
@property(copy, nonatomic) NSString *curMsg; // @synthesize curMsg=_curMsg;
@property(retain, nonatomic) UIButton *backBtn; // @synthesize backBtn=_backBtn;
@property(retain, nonatomic) UIImageView *bgImageView; // @synthesize bgImageView=_bgImageView;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIImageView *iconImageView; // @synthesize iconImageView=_iconImageView;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(nonatomic) int type; // @synthesize type=_type;
@property(copy, nonatomic) CDUnknownBlockType backBtnClickBlock; // @synthesize backBtnClickBlock=_backBtnClickBlock;
@property(retain, nonatomic) UIButton *clickBtn; // @synthesize clickBtn=_clickBtn;
- (void).cxx_destruct;
- (void)backBtnClick:(id)arg1;
- (void)setupUI;
- (void)layoutSubviews;
- (id)init;
- (void)showPlayerExceptionViewWith:(id)arg1 withType:(int)arg2;

@end

