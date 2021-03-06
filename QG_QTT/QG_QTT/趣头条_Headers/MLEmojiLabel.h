//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TTTAttributedLabel.h"

@class NSDictionary, NSRegularExpression, NSString;
@protocol MLEmojiLabelDelegate;

@interface MLEmojiLabel : TTTAttributedLabel
{
    _Bool _disableEmoji;
    _Bool _disableThreeCommon;
    _Bool _isNeedAtAndPoundSign;
    _Bool _ignoreSetText;
    NSString *_customEmojiRegex;
    NSString *_customEmojiPlistName;
    NSString *_customEmojiBundleName;
    id _emojiText;
    NSRegularExpression *_customEmojiRegularExpression;
    NSDictionary *_customEmojiDictionary;
}

+ (id)emojiDictionary;
@property(nonatomic) _Bool ignoreSetText; // @synthesize ignoreSetText=_ignoreSetText;
@property(nonatomic) __weak NSDictionary *customEmojiDictionary; // @synthesize customEmojiDictionary=_customEmojiDictionary;
@property(nonatomic) __weak NSRegularExpression *customEmojiRegularExpression; // @synthesize customEmojiRegularExpression=_customEmojiRegularExpression;
@property(copy, nonatomic) id emojiText; // @synthesize emojiText=_emojiText;
@property(copy, nonatomic) NSString *customEmojiBundleName; // @synthesize customEmojiBundleName=_customEmojiBundleName;
@property(copy, nonatomic) NSString *customEmojiPlistName; // @synthesize customEmojiPlistName=_customEmojiPlistName;
@property(copy, nonatomic) NSString *customEmojiRegex; // @synthesize customEmojiRegex=_customEmojiRegex;
@property(nonatomic) _Bool isNeedAtAndPoundSign; // @synthesize isNeedAtAndPoundSign=_isNeedAtAndPoundSign;
@property(nonatomic) _Bool disableThreeCommon; // @synthesize disableThreeCommon=_disableThreeCommon;
@property(nonatomic) _Bool disableEmoji; // @synthesize disableEmoji=_disableEmoji;
- (void).cxx_destruct;
- (void)copy:(id)arg1;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)setFont:(id)arg1;
- (void)setLineBreakMode:(long long)arg1;
- (struct CGSize)preferredSizeWithMaxWidth:(double)arg1;
- (void)setText:(id)arg1;
- (id)mutableAttributeStringWithEmojiText:(id)arg1;
- (void)drawStrike:(struct __CTFrame *)arg1 inRect:(struct CGRect)arg2 context:(struct CGContext *)arg3;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)commonInit;

// Remaining properties
@property(nonatomic) __weak id <MLEmojiLabelDelegate> delegate;

@end

