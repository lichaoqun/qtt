//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface V5Article : NSObject
{
    NSString *_title;
    NSString *_picUrl;
    NSString *_url;
    NSString *_desc;
}

@property(retain, nonatomic) NSString *desc; // @synthesize desc=_desc;
@property(retain, nonatomic) NSString *url; // @synthesize url=_url;
@property(retain, nonatomic) NSString *picUrl; // @synthesize picUrl=_picUrl;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (void)addPropertyToJSONObject:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (id)initWithTitle:(id)arg1 picUrl:(id)arg2 url:(id)arg3 desc:(id)arg4;

@end

