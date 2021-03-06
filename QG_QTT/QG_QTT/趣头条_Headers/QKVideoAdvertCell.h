//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "QKTableViewCell.h"

#import "LCTableViewCellConfigure-Protocol.h"

@class BaiduMobAdNativeAdView, NSIndexPath, NSString, QKAdImageView, QKAdvert, UIButton, UIImageView, UILabel;

@interface QKVideoAdvertCell : QKTableViewCell <LCTableViewCellConfigure>
{
    QKAdImageView *_mainImageView;
    UILabel *_sourceLabel;
    UIImageView *_sourceLabelBg;
    UIButton *_typeBtn;
    UILabel *_play_time_label;
    BaiduMobAdNativeAdView *_adView;
    QKAdvert *_advert;
    NSIndexPath *_indexPath;
}

@property(retain, nonatomic) NSIndexPath *indexPath; // @synthesize indexPath=_indexPath;
@property(retain, nonatomic) QKAdvert *advert; // @synthesize advert=_advert;
@property(retain, nonatomic) BaiduMobAdNativeAdView *adView; // @synthesize adView=_adView;
@property(retain, nonatomic) UILabel *play_time_label; // @synthesize play_time_label=_play_time_label;
@property(retain, nonatomic) UIButton *typeBtn; // @synthesize typeBtn=_typeBtn;
@property(retain, nonatomic) UIImageView *sourceLabelBg; // @synthesize sourceLabelBg=_sourceLabelBg;
@property(retain, nonatomic) UILabel *sourceLabel; // @synthesize sourceLabel=_sourceLabel;
@property(retain, nonatomic) QKAdImageView *mainImageView; // @synthesize mainImageView=_mainImageView;
- (void).cxx_destruct;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)adClick;
- (void)bindAdObject:(id)arg1 isFirstRequest:(_Bool)arg2;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)update:(id)arg1;
- (void)configureCellWithModel:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

