//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSDate.h>

@interface NSDate (BFKit)
+ (id)dateInformationDescriptionWithInformation:(struct BFDateInformation)arg1 dateSeparator:(id)arg2 usFormat:(_Bool)arg3 nanosecond:(_Bool)arg4;
+ (id)dateInformationDescriptionWithInformation:(struct BFDateInformation)arg1;
+ (id)dateFromDateInformation:(struct BFDateInformation)arg1 timeZone:(id)arg2;
+ (id)dateFromDateInformation:(struct BFDateInformation)arg1;
+ (id)monthStringWithMonthNumber:(long long)arg1;
+ (id)dateWithDatePart:(id)arg1 andTimePart:(id)arg2;
+ (id)month;
+ (id)yesterday;
- (id)shortDate;
- (struct BFDateInformation)dateInformationWithTimeZone:(id)arg1;
- (struct BFDateInformation)dateInformation;
- (id)yearString;
- (id)monthString;
- (id)dateByAddingDays:(unsigned long long)arg1;
- (_Bool)isToday;
- (long long)daysBetweenDate:(id)arg1;
- (long long)monthsBetweenDate:(id)arg1;
- (_Bool)isSameDay:(id)arg1;
- (id)monthlessDate;
- (id)timelessDate;
- (id)dayFromWeekday;
- (long long)weekday;
- (id)month;
@end

