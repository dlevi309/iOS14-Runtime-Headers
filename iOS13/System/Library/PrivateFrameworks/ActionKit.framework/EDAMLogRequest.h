/*
* Generated on Monday, March 1, 2021 at 2:34:35 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
*/

#import <ActionKit/FATObject.h>

@class EDAMSearchRecord;

@interface EDAMLogRequest : FATObject {

	EDAMSearchRecord* _searchRecord;

}

@property (nonatomic,retain) EDAMSearchRecord * searchRecord;              //@synthesize searchRecord=_searchRecord - In the implementation block
+(id)structName;
+(id)structFields;
-(EDAMSearchRecord *)searchRecord;
-(void)setSearchRecord:(EDAMSearchRecord *)arg1 ;
@end

