/*
* Generated on Thursday, January 14, 2021 at 2:24:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ScreenTimeCore.framework/ScreenTimeCore
*/

#import <CoreData/NSManagedObject.h>
#import <libobjc.A.dylib/STSerializableManagedObject.h>
#import <libobjc.A.dylib/STSyncableSubObject.h>

@class STBlueprint, NSArray, NSNumber, STBlueprintUsageLimitScheduleRepresentation, NSString;

@interface STBlueprintUsageLimit : NSManagedObject <STSerializableManagedObject, STSyncableSubObject>

@property (assign,nonatomic) double day0Limit; 
@property (assign,nonatomic) double day1Limit; 
@property (assign,nonatomic) double day2Limit; 
@property (assign,nonatomic) double day3Limit; 
@property (assign,nonatomic) double day4Limit; 
@property (assign,nonatomic) double day5Limit; 
@property (assign,nonatomic) double day6Limit; 
@property (nonatomic,readonly) STBlueprint * blueprint; 
@property (nonatomic,copy) NSArray * applicationIdentifiers; 
@property (nonatomic,copy) NSArray * categoryIdentifiersVersion2; 
@property (nonatomic,copy) NSArray * websiteIdentifiers; 
@property (nonatomic,retain) NSNumber * notificationTimeInterval; 
@property (nonatomic,retain) STBlueprintUsageLimitScheduleRepresentation * budgetLimitScheduleRepresentation; 
@property (nonatomic,copy) NSString * usageItemType; 
@property (nonatomic,copy) NSArray * itemIdentifiers; 
@property (nonatomic,copy) NSArray * categoryIdentifiers; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) id<STSerializableManagedObject> syncableRootObject; 
+(id)limitKeyPaths;
+(id)keyPathsForValuesAffectingBudgetLimitScheduleRepresentation;
-(void)awakeFromFetch;
-(id)dictionaryRepresentation;
-(void)setUsageItemType:(NSString *)arg1 ;
-(void)setItemIdentifiers:(NSArray *)arg1 ;
-(id<STSerializableManagedObject>)syncableRootObject;
-(BOOL)updateWithDictionaryRepresentation:(id)arg1 ;
-(void)setCategoryIdentifiers:(NSArray *)arg1 ;
-(STBlueprintUsageLimitScheduleRepresentation *)budgetLimitScheduleRepresentation;
-(void)setCategoryIdentifiersVersion2:(NSArray *)arg1 ;
-(void)setApplicationIdentifiers:(NSArray *)arg1 ;
-(void)setWebsiteIdentifiers:(NSArray *)arg1 ;
-(void)setBudgetLimit:(double)arg1 forDay:(unsigned long long)arg2 ;
-(void)setBudgetLimit:(double)arg1 ;
-(void)_usageLimitDidChangeFromOldApplicationIdentifiers:(id)arg1 oldCategoryIdentifiers:(id)arg2 oldCategoryIdentifiersVersion2:(id)arg3 oldWebDomains:(id)arg4 oldItemIdentifiers:(id)arg5 oldItemType:(id)arg6 toNewApplicationIdentifiers:(id)arg7 newCategoryIdentifiers:(id)arg8 newCategoryIdentifiersVersion2:(id)arg9 newWebDomains:(id)arg10 newItemIdentifiers:(id)arg11 newItemType:(id)arg12 ;
-(void)setBudgetLimitScheduleRepresentation:(STBlueprintUsageLimitScheduleRepresentation *)arg1 ;
@end

