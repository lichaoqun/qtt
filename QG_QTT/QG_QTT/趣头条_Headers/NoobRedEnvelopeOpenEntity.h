//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "LCBaseModel.h"

@class NSString;

@interface NoobRedEnvelopeOpenEntity : LCBaseModel
{
    NSString *_title;
    NSString *_amount;
    NSString *_btn_text;
    NSString *_btn_location;
}

@property(copy, nonatomic) NSString *btn_location; // @synthesize btn_location=_btn_location;
@property(copy, nonatomic) NSString *btn_text; // @synthesize btn_text=_btn_text;
@property(copy, nonatomic) NSString *amount; // @synthesize amount=_amount;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (id)initWithAttribute:(id)arg1;

@end

