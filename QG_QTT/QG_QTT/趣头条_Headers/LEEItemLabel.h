//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UILabel.h>

@class LEEItem;

@interface LEEItemLabel : UILabel
{
    LEEItem *_item;
    CDUnknownBlockType _textChangedBlock;
}

+ (id)label;
@property(copy, nonatomic) CDUnknownBlockType textChangedBlock; // @synthesize textChangedBlock=_textChangedBlock;
@property(retain, nonatomic) LEEItem *item; // @synthesize item=_item;
- (void).cxx_destruct;
- (void)setNumberOfLines:(long long)arg1;
- (void)setFont:(id)arg1;
- (void)setAttributedText:(id)arg1;
- (void)setText:(id)arg1;

@end

