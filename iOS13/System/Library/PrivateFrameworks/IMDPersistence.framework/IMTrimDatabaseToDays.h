/*
* Generated on Monday, March 1, 2021 at 2:32:33 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/IMDPersistence.framework/IMDPersistence
*/

#import <IMDPersistence/IMDPersistence-Structs.h>
#import <IMDPersistence/IMAbstractDatabaseTrimmer.h>

@interface IMTrimDatabaseToDays : IMAbstractDatabaseTrimmer {

	long long _newerThanDays;

}

@property (nonatomic,readonly) long long newerThanDays;              //@synthesize newerThanDays=_newerThanDays - In the implementation block
-(id)initWithSourceDatabasePath:(id)arg1 destinationDatabasePath:(id)arg2 newerThanDays:(long long)arg3 ;
-(void)performMessageSelectionWithOperation:(IMDSqlOperation*)arg1 ;
-(long long)newerThanDays;
@end

