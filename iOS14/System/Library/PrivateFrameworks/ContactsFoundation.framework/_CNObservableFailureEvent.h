/*
* Generated on Thursday, January 14, 2021 at 2:21:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
*/

#import <ContactsFoundation/CNObservableEvent.h>

@class NSError;

@interface _CNObservableFailureEvent : CNObservableEvent {

	NSError* _error;

}
-(unsigned long long)eventType;
-(id)initWithError:(id)arg1 ;
-(BOOL)hasValue;
-(id)error;
-(void)dematerializeWithObserver:(id)arg1 ;
-(unsigned long long)hash;
-(id)value;
-(BOOL)isEqual:(id)arg1 ;
@end

