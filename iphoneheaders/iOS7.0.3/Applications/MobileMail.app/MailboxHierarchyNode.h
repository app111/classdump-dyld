/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:01:20 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /Applications/MobileMail.app/MobileMail
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@class NSMutableArray, MFMailboxUid, NSString;

@interface MailboxHierarchyNode : NSObject {

	NSMutableArray* _children;
	MFMailboxUid* _mailbox;
	MFMailboxUid* _parentMailbox;
	NSString* _displayName;
	int _level;

}

@property (retain) MFMailboxUid * parentMailbox;              //@synthesize parentMailbox=_parentMailbox - In the implementation block
@property (retain) NSString * displayName;                    //@synthesize displayName=_displayName - In the implementation block
-(void)dealloc;
-(id)description;
-(void)setLevel:(int)arg1 ;
-(int)level;
-(id)displayName;
-(void)setParentMailbox:(id)arg1 ;
-(id)removeNodeForMailbox:(id)arg1 ;
-(id)parentMailbox;
-(id)_findNodeForMailbox:(id)arg1 removeNode:(BOOL)arg2 ;
-(id)findNodeForMailbox:(id)arg1 ;
-(id)initWithMailbox:(id)arg1 ;
-(id)mailbox;
-(void)addChild:(id)arg1 ;
-(void)setDisplayName:(id)arg1 ;
-(id)children;
@end
