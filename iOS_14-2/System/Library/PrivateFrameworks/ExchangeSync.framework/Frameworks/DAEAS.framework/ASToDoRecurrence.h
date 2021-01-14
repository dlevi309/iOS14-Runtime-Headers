/*
* Generated on Thursday, January 14, 2021 at 2:27:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ExchangeSync.framework/Frameworks/DAEAS.framework/DAEAS
*/

#import <DAEAS/ASRecurrence.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDate, NSNumber, ASToDo;

@interface ASToDoRecurrence : ASRecurrence <NSSecureCoding> {

	NSDate* _startTime;
	NSNumber* _regenerate;
	NSNumber* _deadOccur;
	ASToDo* _parentToDo;

}

@property (assign,nonatomic,__weak) ASToDo * parentToDo;              //@synthesize parentToDo=_parentToDo - In the implementation block
@property (nonatomic,retain) NSDate * startTime;                      //@synthesize startTime=_startTime - In the implementation block
@property (nonatomic,retain) NSNumber * regenerate;                   //@synthesize regenerate=_regenerate - In the implementation block
@property (nonatomic,retain) NSNumber * deadOccur;                    //@synthesize deadOccur=_deadOccur - In the implementation block
+(BOOL)supportsSecureCoding;
+(BOOL)acceptsTopLevelLeaves;
+(BOOL)parsingLeafNode;
+(BOOL)parsingWithSubItems;
+(BOOL)frontingBasicTypes;
+(BOOL)notifyOfUnknownTokens;
+(id)asParseRules;
-(void)setStartTime:(NSDate *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSNumber *)regenerate;
-(NSDate *)startTime;
-(void)parseASParseContext:(id)arg1 root:(id)arg2 parent:(id)arg3 callbackDict:(id)arg4 streamCallbackDict:(id)arg5 account:(id)arg6 ;
-(void)appendActiveSyncDataForTask:(id)arg1 toWBXMLData:(id)arg2 ;
-(void)setParentToDo:(ASToDo *)arg1 ;
-(id)initWithParentToDo:(id)arg1 ;
-(void)setUntilString:(id)arg1 ;
-(void)setStartTimeString:(id)arg1 ;
-(void)setRegenerate:(NSNumber *)arg1 ;
-(void)setDeadOccur:(NSNumber *)arg1 ;
-(ASToDo *)parentToDo;
-(NSNumber *)deadOccur;
-(id)initWithCalRecurrence:(void*)arg1 parentToDo:(id)arg2 ;
-(void)saveToCalendarWithParentASToDo:(id)arg1 existingRecord:(void*)arg2 shouldMergeProperties:(BOOL)arg3 outMergeDidChooseLocalProperties:(BOOL*)arg4 ;
-(BOOL)_requiresParentEvent;
-(id)_untilDateForCalFrameworkWithParentStartDate:(id)arg1 ;
-(id)_transformedUntilDateForActiveSync:(id)arg1 ;
@end
