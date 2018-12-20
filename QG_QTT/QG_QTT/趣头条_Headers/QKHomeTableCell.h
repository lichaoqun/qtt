//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "QKTableViewCell.h"

@class QKContentModel, UIButton, UIImage, UIImageView, UILabel;

@interface QKHomeTableCell : QKTableViewCell
{
    UIImageView *_coverView;
    UIImage *_default_coverImage;
    UILabel *_titleLabel;
    UILabel *_readCountLabel;
    QKContentModel *_content;
    UILabel *_timeLabel;
    UIButton *_deletButton;
    UILabel *_tagLabel;
    UIButton *_delButton;
}

@property(retain, nonatomic) UIButton *delButton; // @synthesize delButton=_delButton;
@property(retain, nonatomic) UILabel *tagLabel; // @synthesize tagLabel=_tagLabel;
@property(retain, nonatomic) UIButton *deletButton; // @synthesize deletButton=_deletButton;
@property(retain, nonatomic) UILabel *timeLabel; // @synthesize timeLabel=_timeLabel;
@property(retain, nonatomic) QKContentModel *content; // @synthesize content=_content;
@property(retain, nonatomic) UILabel *readCountLabel; // @synthesize readCountLabel=_readCountLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIImage *default_coverImage; // @synthesize default_coverImage=_default_coverImage;
@property(retain, nonatomic) UIImageView *coverView; // @synthesize coverView=_coverView;
- (void).cxx_destruct;
- (void)removeFav;
- (void)deleteContent:(id)arg1;
- (void)layoutSubviews;
- (void)update:(id)arg1;
- (void)makeContent;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

