/*
* Generated on Thursday, January 14, 2021 at 2:25:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
*/

#import <CoreDAV/CoreDAVItem.h>

@class CoreDAVItemWithNoChildren, CalDAVCalendarServerUpdateItem, CalDAVCalendarServerCancelItem, CalDAVCalendarServerReplyItem;

@interface CalDAVCalendarServerActionItem : CoreDAVItem {

	CoreDAVItemWithNoChildren* _create;
	CalDAVCalendarServerUpdateItem* _update;
	CalDAVCalendarServerCancelItem* _cancel;
	CalDAVCalendarServerReplyItem* _reply;

}

@property (nonatomic,retain) CoreDAVItemWithNoChildren * create;                   //@synthesize create=_create - In the implementation block
@property (nonatomic,retain) CalDAVCalendarServerUpdateItem * update;              //@synthesize update=_update - In the implementation block
@property (nonatomic,retain) CalDAVCalendarServerCancelItem * cancel;              //@synthesize cancel=_cancel - In the implementation block
@property (nonatomic,retain) CalDAVCalendarServerReplyItem * reply;                //@synthesize reply=_reply - In the implementation block
-(void)setUpdate:(CalDAVCalendarServerUpdateItem *)arg1 ;
-(id)init;
-(CoreDAVItemWithNoChildren *)create;
-(CalDAVCalendarServerUpdateItem *)update;
-(CalDAVCalendarServerReplyItem *)reply;
-(CalDAVCalendarServerCancelItem *)cancel;
-(void)setReply:(CalDAVCalendarServerReplyItem *)arg1 ;
-(void)setCancel:(CalDAVCalendarServerCancelItem *)arg1 ;
-(id)copyParseRules;
-(void)setCreate:(CoreDAVItemWithNoChildren *)arg1 ;
@end

