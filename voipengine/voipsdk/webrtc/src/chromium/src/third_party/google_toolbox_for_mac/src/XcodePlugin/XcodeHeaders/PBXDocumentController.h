/*
 *     Generated by class-dump 3.1.1.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2006 by Steve Nygard.
 */

//	Framework:     	DevToolsCore
//	Header:       	Unknown
//	Documentation:	Unknown

#include <Cocoa/Cocoa.h>

@interface PBXDocumentController : NSDocumentController
{
	NSMutableArray*         _extendedTypes;
	NSMutableDictionary*    _fileTypeToDocumentTypeDict;
	char                    _isRunningOpenPanel;
	NSMutableDictionary*    _localizedFileTypes;
	NSMutableArray*         _openedDocuments;
}

+ (void) initialize;

- (void) _addAvailableDocumentTypesForFileType: (id) parameter1 toArray: (id) parameter2;
- (id) _allFileTypeIdentifiersForFileType: (id) parameter1;
- (id) _documentTypeForFileType: (id) parameter1 usingAuxiliaryPreferenceDictionary: (id) parameter2;
- (id) _documentTypeForFileType: (id) parameter1 usingAuxiliaryPreferenceDictionary: (id) parameter2 ignoringExternalEditors: (char) parameter3 ignoringPrefsForFirstLevel: (char) parameter4;
- (id) _fileTypeToDocumentTypeDictionary;
- (int) _indexOfType: (id) parameter1;
- (id) _innerOpenDocumentWithContentsOfFile: (id) parameter1 display: (char) parameter2;
- (id) _nameOfType: (id) parameter1;
- (int) _nextUntitledDocumentNumber;
- (id) _realDocumentPathForPath: (id) parameter1;
- (id) _realDocumentPathForPath: (id) parameter1 extension: (id) parameter2;
- (void) _reviewUnsavedDocumentsWithAlertTitle: (id) parameter1 cancellable: (char) parameter2 delegate: (id) parameter3 didReviewAllSelector: (SEL) parameter4 contextInfo: (void*) parameter5;
- (void) _setActiveProjectForWindow: (id) parameter1;
- (id) _types;
- (void) _windowDidBecomeMain: (id) parameter1;
- (id) activeProject;
- (void) addDocumentTypes: (id) parameter1;
- (void) applicationWillTerminate: (id) parameter1;
- (id) availableDocumentTypesForFileType: (id) parameter1;
- (void) cancel: (id) parameter1;
- (id) currentProjectDocument;
- (void) dealloc;
- (id) displayNameForType: (id) parameter1;
- (id) documentTypeForFileAtPath: (id) parameter1;
- (id) documentTypeForFileAtPath: (id) parameter1 ignoringExternalEditors: (char) parameter2;
- (id) documentTypeForFileType: (id) parameter1;
- (id) documentTypeForFileType: (id) parameter1 ignoringExternalEditors: (char) parameter2;
- (id) documentTypes;
- (id) editedFileDocuments;
- (id) editedProjectDocuments;
- (id) fileDocuments;
- (id) fileDocumentsInProjectDocument: (id) parameter1;
- (id) fileTypeToDocumentTypePreferenceDictionary;
- (void) finalize;
- (id) init;
- (void) noteNewRecentDocument: (id) parameter1;
- (void) openDocument: (id) parameter1;
- (id) openDocumentWithContentsOfFile: (id) parameter1 display: (char) parameter2;
- (id) openDocumentWithContentsOfURL: (id) parameter1 display: (char) parameter2;
- (char) panel: (id) parameter1 isValidFilename: (id) parameter2;
- (void) pluginDidLoad: (id) parameter1;
- (id) projectDocumentForProject: (id) parameter1;
- (id) projectDocuments;
- (id) projectDocumentsContainingFile: (id) parameter1;
- (void) reviewUnsavedDocumentsWithAlertTitle: (id) parameter1 cancellable: (char) parameter2 delegate: (id) parameter3 didReviewAllSelector: (SEL) parameter4 contextInfo: (void*) parameter5;
- (int) runModalOpenPanel: (id) parameter1 forTypes: (id) parameter2;
- (void) saveAllDidReviewSaveForDocumentController: (id) parameter1 didReviewAll: (char) parameter2 contextInfo: (void*) parameter3;
- (void) saveAllDocuments: (id) parameter1;
- (void) setDocumentType: (id) parameter1 forFileType: (id) parameter2;
- (id) untitledFileDocumentWithName: (id) parameter1;

@end