/*
* Generated on Monday, March 1, 2021 at 2:33:22 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/SymptomEvaluator
*/


@class NSString, NSDate, NSMutableData;

@interface JournalRecordInfo : NSObject {

	NSString* _journalName;
	NSDate* _lastUpdate;
	NSMutableData* _journalData;

}

@property (readonly) NSString * journalName;                   //@synthesize journalName=_journalName - In the implementation block
@property (readonly) NSDate * lastUpdate;                      //@synthesize lastUpdate=_lastUpdate - In the implementation block
@property (readonly) NSMutableData * journalData;              //@synthesize journalData=_journalData - In the implementation block
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSDate *)lastUpdate;
-(NSString *)journalName;
-(NSMutableData *)journalData;
-(id)initWithJournalName:(id)arg1 lastUpdate:(id)arg2 journalData:(id)arg3 ;
@end
