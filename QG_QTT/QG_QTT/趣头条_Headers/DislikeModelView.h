//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIButton.h>

@class NSMutableArray, UILabel, UIView;
@protocol DislikeModelViewDelegate;

@interface DislikeModelView : UIButton
{
    UIView *_cellView;
    struct CGRect _original_frame;
    UIView *_original_superview;
    UILabel *_lTitle;
    double _displayTime;
    UIButton *_background;
    UIButton *_btnDislike;
    id _object;
    long long _from;
    long long _style;
    NSMutableArray *_selectedList;
    id <DislikeModelViewDelegate> _delegate;
}

+ (void)dismiss;
+ (_Bool)isPresenting;
+ (id)dislikeModelView:(id)arg1 style:(long long)arg2;
+ (id)dislikeModelView:(id)arg1;
@property(nonatomic) __weak id <DislikeModelViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSMutableArray *selectedList; // @synthesize selectedList=_selectedList;
@property(nonatomic) long long style; // @synthesize style=_style;
@property(nonatomic) long long from; // @synthesize from=_from;
@property(retain, nonatomic) id object; // @synthesize object=_object;
@property(retain, nonatomic) UIButton *btnDislike; // @synthesize btnDislike=_btnDislike;
@property(retain, nonatomic) UIButton *background; // @synthesize background=_background;
- (void).cxx_destruct;
- (void)dismiss;
- (void)showCellView:(id)arg1 byPt:(struct CGPoint)arg2 endPt:(struct CGPoint)arg3;
- (void)show;
- (id)backgroundView;
- (void)onButtonClicked:(id)arg1;
- (id)getParams;
- (id)getButtonAtIndex:(long long)arg1;
- (double)layoutItems:(id)arg1;
- (id)initWithItems:(id)arg1 style:(long long)arg2;
- (void)handleDeepLink;
- (void)dealloc;

@end

