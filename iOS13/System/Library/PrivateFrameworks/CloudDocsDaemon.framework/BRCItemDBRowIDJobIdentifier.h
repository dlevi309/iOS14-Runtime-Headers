/*
* Generated on Monday, March 1, 2021 at 2:34:44 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
*/

#import <CloudDocsDaemon/CloudDocsDaemon-Structs.h>
#import <libobjc.A.dylib/BRCJobIdentifying.h>

@class NSString;

@interface BRCItemDBRowIDJobIdentifier : NSObject <BRCJobIdentifying> {

	long long _itemDBRowID;

}

@property (nonatomic,readonly) long long itemDBRowID;               //@synthesize itemDBRowID=_itemDBRowID - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)columns;
-(id)matchingJobsWhereSQLClause;
-(id)columnsValues;
-(id)jobsDescription;
-(long long)itemDBRowID;
-(id)initWithItemDBRowID:(long long)arg1 ;
-(BOOL)isEqualToItemDBRowIDIdentifier:(id)arg1 ;
@end

