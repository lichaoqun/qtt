//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "QKView.h"

@class UILabel, UIView;

@interface QKReferSectionHeader : QKView
{
    UILabel *_titleLabel;
    UIView *_separaterView;
}

+ (double)headerHeight;
+ (id)header;
@property(retain, nonatomic) UIView *separaterView; // @synthesize separaterView=_separaterView;
@property(nonatomic) __weak UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

