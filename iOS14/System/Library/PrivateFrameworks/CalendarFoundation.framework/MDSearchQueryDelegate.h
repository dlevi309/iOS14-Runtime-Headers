/*
* Generated on Thursday, January 14, 2021 at 2:23:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CalendarFoundation.framework/CalendarFoundation
*/


@protocol MDSearchQueryDelegate <NSObject>
@optional
-(void)searchQuery:(id)arg1 statusChanged:(unsigned long long)arg2;
-(void)searchQuery:(id)arg1 didFailWithError:(id)arg2;

@required
-(void)searchQuery:(id)arg1 didReturnItems:(id)arg2;

@end

