//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "LCBaseModel.h"

@class NSString;

@interface QKHttps : LCBaseModel
{
    _Bool _available;
    NSString *_host;
    NSString *_path;
    NSString *_https_url;
}

@property(nonatomic) _Bool available; // @synthesize available=_available;
@property(copy, nonatomic) NSString *https_url; // @synthesize https_url=_https_url;
@property(copy, nonatomic) NSString *path; // @synthesize path=_path;
@property(copy, nonatomic) NSString *host; // @synthesize host=_host;
- (void).cxx_destruct;
- (id)initWithAttribute:(id)arg1;

@end

