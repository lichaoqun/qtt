//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class MPVolumeView, UISlider;

@interface VolumeController : NSObject
{
    float _lastVolumeValue;
    MPVolumeView *_mpVolumeView;
    UISlider *_slider;
}

+ (id)shareInstance;
@property(retain, nonatomic) UISlider *slider; // @synthesize slider=_slider;
@property(retain, nonatomic) MPVolumeView *mpVolumeView; // @synthesize mpVolumeView=_mpVolumeView;
@property(nonatomic) float lastVolumeValue; // @synthesize lastVolumeValue=_lastVolumeValue;
- (void).cxx_destruct;
- (float)getVolume;
- (void)unMute;
- (void)mute;
- (void)setVolumeValue:(float)arg1;
- (void)generateMPVolumeSlider;

@end

