//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIImageView.h>

@class UIButton, UILabel;

@interface QKMediaHeader : UIImageView
{
    UIImageView *_avatar;
    UILabel *_name;
    UIButton *_ranking;
    UILabel *_field;
    UILabel *_fans;
    UILabel *_read;
    UILabel *_store;
    UILabel *_describe;
}

@property(retain, nonatomic) UILabel *describe; // @synthesize describe=_describe;
@property(retain, nonatomic) UILabel *store; // @synthesize store=_store;
@property(retain, nonatomic) UILabel *read; // @synthesize read=_read;
@property(retain, nonatomic) UILabel *fans; // @synthesize fans=_fans;
@property(retain, nonatomic) UILabel *field; // @synthesize field=_field;
@property(retain, nonatomic) UIButton *ranking; // @synthesize ranking=_ranking;
@property(retain, nonatomic) UILabel *name; // @synthesize name=_name;
@property(retain, nonatomic) UIImageView *avatar; // @synthesize avatar=_avatar;
- (void).cxx_destruct;
- (void)rankingAction;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)update:(id)arg1;

@end

