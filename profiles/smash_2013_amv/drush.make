; smash_2013_amv make file for d.o. usage
core = "7.28"
api = "2"

projects[drupal][version] = "7.28"

; +++++ Modules +++++

projects[ctools][version] = "1.4"
projects[ctools][subdir] = "contrib"

projects[profiler_builder][version] = "1.0-rc4"
projects[profiler_builder][subdir] = "contrib"

projects[ds][version] = "2.6"
projects[ds][subdir] = "contrib"

projects[features][version] = "2.0"
projects[features][subdir] = "contrib"

projects[uuid_features][version] = "1.0-alpha4"
projects[uuid_features][subdir] = "contrib"

projects[countries][version] = "2.1"
projects[countries][subdir] = "contrib"

projects[email][version] = "1.3"
projects[email][subdir] = "contrib"

projects[field_permissions][version] = "1.0-beta2"
projects[field_permissions][subdir] = "contrib"

projects[link][version] = "1.2"
projects[link][subdir] = "contrib"

projects[media][version] = "1.4"
projects[media][subdir] = "contrib"

projects[entity][version] = "1.5"
projects[entity][subdir] = "contrib"

projects[libraries][version] = "2.2"
projects[libraries][subdir] = "contrib"

projects[mediaelement][version] = "1.2"
projects[mediaelement][subdir] = "contrib"

projects[strongarm][version] = "2.0"
projects[strongarm][subdir] = "contrib"

projects[rules][version] = "2.7"
projects[rules][subdir] = "contrib"

projects[uuid][version] = "1.0-alpha5"
projects[uuid][subdir] = "contrib"

projects[jquery_update][version] = "2.4"
projects[jquery_update][subdir] = "contrib"

projects[views][version] = "3.8"
projects[views][subdir] = "contrib"

projects[fivestar][version] = "2.0-alpha2"
projects[fivestar][subdir] = "contrib"

projects[votingapi][version] = "2.11"
projects[votingapi][subdir] = "contrib"

projects[webform][version] = "3.20"
projects[webform][subdir] = "contrib"

; +++++ Themes +++++

; zen
projects[zen][type] = "theme"
projects[zen][version] = "5.5"
projects[zen][subdir] = "contrib"

; +++++ Libraries +++++

; Profiler
libraries[profiler][directory_name] = "profiler"
libraries[profiler][type] = "library"
libraries[profiler][destination] = "libraries"
libraries[profiler][download][type] = "get"
libraries[profiler][download][url] = "http://ftp.drupal.org/files/projects/profiler-7.x-2.x-dev.tar.gz"

libraries[mediaelement][directory_name] = "mediaelement"
libraries[mediaelement][type] = "library"
libraries[mediaelement][destination] = "libraries"
libraries[mediaelement][download][type] = "get"
libraries[mediaelement][download][url] = "http://github.com/johndyer/mediaelement/zipball/master"

