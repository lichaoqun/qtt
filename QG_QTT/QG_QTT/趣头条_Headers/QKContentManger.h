//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSDate, NSMutableArray, NSMutableDictionary, NSString, UIFont;

@interface QKContentManger : NSObject
{
    UIFont *_font;
    UIFont *_bold_font;
    UIFont *_default_font;
    UIFont *_default_bold_font;
    NSDate *_readTime_start;
    NSDate *_yx_readTime_start;
    double _yx_readTime_duration;
    double _yx_videoTotalDuration;
    NSMutableDictionary *_mediaInfo;
    NSMutableArray *_readContents;
    NSMutableDictionary *_fontAttributes;
}

+ (id)manger;
@property(retain, nonatomic) NSMutableDictionary *fontAttributes; // @synthesize fontAttributes=_fontAttributes;
@property(retain, nonatomic) NSMutableArray *readContents; // @synthesize readContents=_readContents;
@property(retain, nonatomic) NSMutableDictionary *mediaInfo; // @synthesize mediaInfo=_mediaInfo;
@property(nonatomic) double yx_videoTotalDuration; // @synthesize yx_videoTotalDuration=_yx_videoTotalDuration;
@property(nonatomic) double yx_readTime_duration; // @synthesize yx_readTime_duration=_yx_readTime_duration;
@property(retain, nonatomic) NSDate *yx_readTime_start; // @synthesize yx_readTime_start=_yx_readTime_start;
@property(retain, nonatomic) NSDate *readTime_start; // @synthesize readTime_start=_readTime_start;
@property(retain, nonatomic) UIFont *default_bold_font; // @synthesize default_bold_font=_default_bold_font;
@property(retain, nonatomic) UIFont *default_font; // @synthesize default_font=_default_font;
@property(retain, nonatomic) UIFont *bold_font; // @synthesize bold_font=_bold_font;
@property(retain, nonatomic) UIFont *font; // @synthesize font=_font;
- (void).cxx_destruct;
- (long long)getMedieFollowStatus:(id)arg1;
- (void)setMedieFollowStatus:(_Bool)arg1 authorId:(id)arg2;
- (void)clearExpiredContent;
- (void)yx_reportReadTimeDurationWithContentId:(id)arg1;
- (void)reportReadTimeWith:(id)arg1 content:(id)arg2;
- (void)insertContent:(id)arg1;
- (_Bool)isExistContent:(id)arg1;
@property(retain, nonatomic) NSString *fontSize;
@property(nonatomic) _Bool isIncomeAlert;
- (id)init;

@end

